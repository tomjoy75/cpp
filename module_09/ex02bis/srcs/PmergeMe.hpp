/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomjoy75 <tomjoy75@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:55:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/17 00:26:31 by tomjoy75         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <list>
//# include <sstream>
//# include <algorithm>
//# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

template<typename Iterator>
class   Group{
private:
    Iterator  _it;
    std::size_t _size;
public:
    Group(Iterator it, size_t size): _it(it), _size(size){};

//Operators of incrementation
//    Group   &operator++();
    Group   operator++(int){
        Group   old = *this;
        this->_it += this->_size;
        return ( old );
    };
//    Group   &operator--();
    Group   operator--(int){
        Group   old = *this;
        this->_it -= this->_size;
        return (old);
    };
//Operators of comparison
    bool operator>(Group const &rhs) const{ return(*this->_it > *rhs.getIt());};

    Iterator const  getIt( void ) const{ return (_it); };
    
    std::size_t     getSize( void ) const{ return (_size); };

    std::size_t distance(Group<Iterator> last) const{
        // std::size_t i = 0;
        // for (; this->_it + i != last.getIt() ; i++){
        // }
        // return (i);
        std::size_t groupDistance = std::distance(this->_it, last.getIt());
        return (groupDistance / this->_size);
    };

};

// template<typename Iterator>
// std::size_t distance(Iterator first, Iterator last){
//     std::size_t i = 0;
//     for (; first + i != last; i++){
//     }
//     return (i);
// }

template<typename Iterator>
Group<Iterator>    makeGroup(Iterator it, std::size_t size){
    return (Group<Iterator>(it, size));
}

template<typename Iterator>
void    printGroup(Iterator first, Iterator last){
//    std::size_t i = 0;
    std::cout << "\tLevel : " << first.getSize() << " \n\t";
    while ( first.getIt() != last.getIt() ){
        std::cout << "(_";
        for (std::size_t i = 0; i < first.getSize(); i++){
            std::cout << *(first.getIt() + i) << "_" ; 
        }
        std::cout << ") ";
        first++;
    }
    std::cout << std::endl;

   // for (; first != last; first++)
}

template<typename Iterator>
void    swapGroup(Iterator first, Iterator last){
    int maxA = first.getSize() - 1;
    int maxB = maxA + first.getSize();
    std::cout << "maxA = " << maxA << "maxB = " << maxB << std::endl;
    while (first.getIt() != last.getIt()){
        if ( *(first.getIt() + maxA) > *(first.getIt() + maxB)){
            for ( int i = 0; i <= maxA; i++ ){
                int tmp = *(first.getIt() + i);
                *(first.getIt() + i) = *(first.getIt() + first.getSize() + i);
                *(first.getIt() + first.getSize() + i) = tmp;
            }
        }
        first++;
        first++;
    }
}

template<typename Iterator>
void    mergeInsertion(Iterator first, Iterator last){
// Gestion of odd numbers
    std::size_t size = first.distance(last);
    std::cout << "___Merge Insertion___" << std::endl;
    std::cout << "\tDistance between iterators is : " << size << std::endl;
    if (size <= 1 ){
        std::cout << "___Out of Merge Insertion (highest)___" << std::endl;
        return;
    }
    Iterator    end = last;
    printGroup(first, end);
    if ( size%2 )
        end--;
    printGroup(first, end);
    std::cout << "\tNew distance is : " << first.distance(end) << std::endl;
    // TODO: while first != second
    // if biggest is second => swap  : Operator overload > 
    // if (first > first + first.getSize())
    //     std::cout << "\t" << *(first.getIt()) << " is bigger than " << *(last.getIt()) << std::endl;
    // first += 2 * size
    swapGroup(first, end);
    printGroup(first, last);
//    printGroup(first, end);
    mergeInsertion(makeGroup(first.getIt(), 2 * first.getSize()), makeGroup(end.getIt(), 2 * first.getSize()));
//    mergeInsertion(makeGroup(first.getIt(), 2 ), makeGroup(end.getIt(), 2 ));
}

template<typename Iterator>
void    sort(Iterator first, Iterator last){
    mergeInsertion(makeGroup(first, 1), makeGroup(last, 1));
    for (; first < last; first++)
        std::cout << "\"" << *first << "\"" ;
    std::cout << std::endl;
}

// TODO: Implement a verification of siblings (double numbers)