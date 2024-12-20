/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:42:05 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/19 12:22:47 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2){
        std::cerr << "Usage : " << argv[0] << " arg1 arg2 ..." << std::endl;
        return (1);
    }
    std::vector<int>    vec;
    std::deque<int>     deq;    
    if (!argvValid(argc, argv, vec, deq)){
        std::cerr << "Error" << std::endl;
        return (1);
    }
    if (argc < 3){
        std::cerr << "Not enough element to sort" << std::endl;
        return (1);
    }
    std::cout << "Before: ";
    print_vector(vec);
    std::clock_t start = std::clock();
    vec = merge_insertion_sort(vec);
    std::clock_t end = std::clock();
    std::cout << "After: ";
    print_vector(vec);
    double   duration = 1000000.0 * ( end - start ) / CLOCKS_PER_SEC;   
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << duration << " us" << std::endl;
    start = std::clock();
    deq = merge_insertion_sort(deq);
    end = std::clock();
    duration = 1000000.0 * ( end - start ) / CLOCKS_PER_SEC;   
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << duration << " us" << std::endl;
    return 0;
}
// https://excalidraw.com/#json=luRADdGlKSSY3h_fY-6v5,N-nsrGBuRfau2B-D5J-PwQ