#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <utility> // For std::pair
#include <cmath>
#include <climits>
#include <ctime>

// Fonction pour afficher un vecteur
template<typename T>
void print_vector(const std::vector<T>& vec) {
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// Création de paires
std::vector<std::vector<int> > create_pairs(std::vector<int>& a) {
    std::vector<std::vector<int> > split_array;
    std::vector<int> temp_array;
    for (size_t i = 0; i < a.size(); ++i) {
        if (temp_array.size() == 1) { // Case end of line : Add the last number and stock the vector in 2d vector
            temp_array.push_back(a[i]);
            split_array.push_back(temp_array);
            temp_array.clear();
        } else if (split_array.size() * 2 == a.size() - 1) { // Case singleton : Only one int on a line
            std::vector<int> single;
            single.push_back(a[i]);
            split_array.push_back(single);
        } else {                        // Default case : add a number to temp_array
            temp_array.push_back(a[i]);
        }
    }
    return split_array;
}

// Trier chaque paire
std::vector<std::vector<int> > sort_each_pair(std::vector<std::vector<int> >& split_array) {
    for (size_t i = 0; i < split_array.size(); ++i) {
        if (split_array[i].size() == 2 && split_array[i][0] > split_array[i][1]) {
            std::swap(split_array[i][0], split_array[i][1]);
        }
    }
    return split_array;
}

// Fonction Jacobsthal récursive
int jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

// Construire la séquence d'insertion Jacobsthal
std::vector<int> build_jacob_insertion_sequence(size_t array_len) {
    std::vector<int> end_sequence;
    int jacob_index = 2;
    while (jacobsthal(jacob_index) < static_cast<int>(array_len - 1)) {
        end_sequence.push_back(jacobsthal(jacob_index));
        ++jacob_index;
    }
    std::cout << "jacob_insertion_sequence : ";
    for (std::vector<int>::iterator it = end_sequence.begin() ; it != end_sequence.end(); it++)
        std::cout << *it << " " << std::endl;
    std::cout << std::endl;
    return end_sequence;
}

// // Fonction d'insertion par comparaison pour les paires
// void insert_pair(std::vector<std::pair<int, int> >& A, std::pair<int, int> element, int n) {
//     while (n >= 0 && element.second < A[n].second) {
//         if (n + 1 >= static_cast<int>(A.size())) {
//             A.push_back(A[n]);
//         } else {
//             A[n + 1] = A[n];
//         }
//         --n;
//     }
//     if (n + 1 >= static_cast<int>(A.size())) {
//         A.push_back(element);
//     } else {
//         A[n + 1] = element;
//     }
// }

// // Tri récursif des paires
// void insertion_sort_pairs(std::vector<std::pair<int, int> >& A, int n) {
//     if (n < 1) return;
//     insertion_sort_pairs(A, n - 1);
//     insert_pair(A, A[n], n - 1);
// }

// Fonction pour insérer un élément dans un tableau trié
void insert_sorted(std::vector<std::vector<int> >& A, std::vector<int> element, int n) {
    while (n >= 0 && element.back() < A[n].back()) {
//        if (n + 1 >= static_cast<int>(A.size())) { // Case of singleton
//            A.push_back(A[n]);
//        } else {
            A[n + 1] = A[n];
//        }
        --n;
    }
//    if (n + 1 >= static_cast<int>(A.size())) {
//        A.push_back(element);
//    } else {
        A[n + 1] = element;
//    }
}

// Tri récursif des paires par la plus grande valeur
void insertion_sort_pairs(std::vector<std::vector<int> >& A, int n) {
    if (n < 1) return;
    insertion_sort_pairs(A, n - 1);
    insert_sorted(A, A[n], n - 1);
}

// Création de la séquence finale
std::vector<int> create_s(std::vector<std::vector<int> >& sorted_split_array, int stash, bool print_comparison_estimation) {
    std::vector<int> S, pend;
    int comparisons_made = 0;

    for (size_t i = 0; i < sorted_split_array.size(); ++i) {
        if (sorted_split_array[i].size() == 2) {
            S.push_back(sorted_split_array[i][1]);
            pend.push_back(sorted_split_array[i][0]);
        } else {
            S.push_back(sorted_split_array[i][0]);
        }
    }

    S.insert(S.begin(), pend[0]);

    std::vector<int> jacob_sequence = build_jacob_insertion_sequence(pend.size());
    size_t iterator = 1;

    while (iterator < pend.size()) {
        int item = pend[iterator++];
        std::vector<int>::iterator pos = std::lower_bound(S.begin(), S.end(), item);
        S.insert(pos, item);
        comparisons_made += 2;
    }

    if (stash != -1) {
        std::vector<int>::iterator pos = std::lower_bound(S.begin(), S.end(), stash);
        S.insert(pos, stash);
        comparisons_made += 2;
    }

    if (print_comparison_estimation) {
        std::cout << "Comparisons Made: " << comparisons_made << std::endl;
    }
    return S;
}

std::vector<int> merge_insertion_sort(std::vector<int> A) {
    std::cout << "Starting Array: ";
    print_vector(A);

    int stash = -1;
    if (A.size() % 2 != 0) {
        stash = A.back();
        A.pop_back();
    }

    std::vector<std::vector<int> > split_array = create_pairs(A);
    std::vector<std::vector<int> > sorted_split_array = sort_each_pair(split_array);
    insertion_sort_pairs(sorted_split_array, sorted_split_array.size() - 1);
    std::vector<int> S = create_s(sorted_split_array, stash, true);

    std::cout << "Sorted Array: ";
    print_vector(S);
    return S;
}

bool    argvValid(int argc, char **argv, std::vector<int> &vec, std::list<int> &ls){
    for (int i = 1; i < argc; i++){
        char    *endptr = NULL; 
        long num = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || num < 0)
            return (0);
        if ( num < INT_MIN || num > INT_MAX)
            return (0);
        vec.push_back(static_cast<int>(num));
        ls.push_back(static_cast<int>(num));
    }
    return (1);
}

int main(int argc, char **argv) {
    if (argc < 2){
        std::cerr << "Usage : " << argv[0] << " arg1 arg2 ..." << std::endl;
        return (1);
    }
    std::vector<int>    vec;
    std::list<int>      lis;    
    if (!argvValid(argc, argv, vec, lis)){
        std::cerr << "Error" << std::endl;
        return (1);
    }
    if (argc < 3){
        std::cerr << "Not enough element to sort" << std::endl;
        return (1);
    }
    std::clock_t start = std::clock();
    merge_insertion_sort(vec);
    std::clock_t end = std::clock();
    double   duration = 1000000.0 * ( end - start ) / CLOCKS_PER_SEC;   
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << duration << " us" << std::endl;
    return 0;
}
//TODO Make a graphic of the algorithm 🟠🛠️
//TODO Check no negative ✅
//TODO If only one number ✅
//TODO Implement on list
//TODO Implement the clock  
// https://excalidraw.com/#json=luRADdGlKSSY3h_fY-6v5,N-nsrGBuRfau2B-D5J-PwQ