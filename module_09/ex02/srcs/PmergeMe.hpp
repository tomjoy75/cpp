/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:40:34 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/19 12:25:21 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <deque>
# include <algorithm>
# include <climits>
# include <ctime>

template<typename Container>
void print_vector(const Container& vec) {
    for (typename Container::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template<typename Container>
std::vector<Container> create_pairs(Container& a) {
    std::vector<Container > split_array;
    Container temp_array;
    for (size_t i = 0; i < a.size(); ++i) {
        if (temp_array.size() == 1) { // Case end of line : Add the last number and stock the vector in 2d vector
            temp_array.push_back(a[i]);
            split_array.push_back(temp_array);
            temp_array.clear();
        } else if (split_array.size() * 2 == a.size() - 1) { // Case singleton : Only one int on a line
            Container single;
            single.push_back(a[i]);
            split_array.push_back(single);
        } else {                        // Default case : add a number to temp_array
            temp_array.push_back(a[i]);
        }
    }
    return split_array;
}

template <typename Container>
std::vector< Container > sort_each_pair(std::vector< Container >& split_array) {
    for (size_t i = 0; i < split_array.size(); ++i) {
        if (split_array[i].size() == 2 && split_array[i][0] > split_array[i][1]) {
            std::swap(split_array[i][0], split_array[i][1]);
        }
    }
    return split_array;
}

int jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

template <typename Container>
Container build_jacob_insertion_sequence(size_t array_len) {
    Container end_sequence;
    int jacob_index = 2;
    while (jacobsthal(jacob_index) < static_cast<int>(array_len - 1)) {
        end_sequence.push_back(jacobsthal(jacob_index));
        ++jacob_index;
    }
    // std::cout << "jacob_insertion_sequence : ";
    // for (typename Container::iterator it = end_sequence.begin() ; it != end_sequence.end(); it++)
    //     std::cout << *it << " " << std::endl;
    // std::cout << std::endl;
    return end_sequence;
}

template<typename Container>
void insert_sorted(std::vector< Container >& A, Container element, int n) {
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

template<typename Container>
void insertion_sort_pairs(std::vector< Container >& A, int n) {
    if (n < 1) return;
    insertion_sort_pairs(A, n - 1);
    insert_sorted(A, A[n], n - 1);
}

template<typename Container>
Container create_s(std::vector<Container >& sorted_split_array, int stash) {
    Container S, pend;
    // int comparisons_made = 0;

    for (size_t i = 0; i < sorted_split_array.size(); ++i) {
        if (sorted_split_array[i].size() == 2) {
            S.push_back(sorted_split_array[i][1]);
            pend.push_back(sorted_split_array[i][0]);
        } else {
            S.push_back(sorted_split_array[i][0]);
        }
    }

    S.insert(S.begin(), pend[0]);

    Container jacob_sequence = build_jacob_insertion_sequence<Container>(pend.size());
    size_t iterator = 1;

    while (iterator < pend.size()) {
        int item = pend[iterator++];
        typename Container::iterator pos = std::lower_bound(S.begin(), S.end(), item);
        S.insert(pos, item);
    }

    if (stash != -1) {
        typename Container::iterator pos = std::lower_bound(S.begin(), S.end(), stash);
        S.insert(pos, stash);
    }
    return S;
}

template<typename Container>
Container merge_insertion_sort(Container A) {
    int stash = -1;
    if (A.size() % 2 != 0) {
        stash = A.back();
        A.pop_back();
    }
    std::vector<Container > split_array = create_pairs(A);
    std::vector<Container > sorted_split_array = sort_each_pair(split_array);
    insertion_sort_pairs(sorted_split_array, sorted_split_array.size() - 1);
    Container S = create_s(sorted_split_array, stash);
    return S;
}

bool    argvValid(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq){
    for (int i = 1; i < argc; i++){
        char    *endptr = NULL; 
        long num = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || num < 0)
            return (0);
        if ( num < INT_MIN || num > INT_MAX)
            return (0);
        vec.push_back(static_cast<int>(num));
        deq.push_back(static_cast<int>(num));
    }
    return (1);
}