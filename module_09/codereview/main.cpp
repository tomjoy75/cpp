#include "newmergeInsertion.hpp"

// Prototypes des fonctions de tri
template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort(RandomAccessIterator first, RandomAccessIterator last, Compare compare);

int main() {
    // Initialisation du générateur de nombres aléatoires
    std::srand(static_cast<unsigned>(std::time(0)));

    // Création d'un vecteur d'entiers aléatoires
    std::vector<int> data;
    const std::size_t data_size = 10; // Taille du vecteur
    for (std::size_t i = 0; i < data_size; ++i) {
        data.push_back(std::rand() % 100); // Nombres aléatoires entre 0 et 99
    }

    // Affichage des données avant le tri
    std::cout << "Données avant le tri : ";
    for (std::size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    // Tri des données
    merge_insertion_sort(data.begin(), data.end(), std::less<int>());

    // Affichage des données après le tri
    std::cout << "Données après le tri : ";
    for (std::size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
