/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:55:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/12 16:48:56 by tjoyeux          ###   ########.fr       */
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
        this->_it += this->_size;
        return ( *this );
    };
//    Group   &operator--();
    Group   operator--(int){
        Group   old = *this;
        this->_it--;
        return (old);
    }

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
    std::cout << "\tNew distance is : " << first.distance(end) << std::endl;
    mergeInsertion(makeGroup(first.getIt(), 2 * first.getSize()), makeGroup(end.getIt(), 2 * first.getSize()));
//    mergeInsertion(makeGroup(first.getIt(), 2 ), makeGroup(end.getIt(), 2 ));
}

template<typename Iterator>
void    sort(Iterator first, Iterator last){
    mergeInsertion(makeGroup(first, 1), makeGroup(last, 1));
}