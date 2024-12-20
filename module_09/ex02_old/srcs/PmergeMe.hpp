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
# include <sstream>
# include <algorithm>
# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

// Iterator used to sort views of the collection
template<typename Iterator>
class group_iterator {
private:
    Iterator _it;
    std::size_t _size;

public:
    // Public types
    typedef std::random_access_iterator_tag iterator_category;
    typedef Iterator iterator_type;
    typedef typename std::iterator_traits<Iterator>::value_type value_type;
    typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
    typedef typename std::iterator_traits<Iterator>::pointer pointer;
    typedef typename std::iterator_traits<Iterator>::reference reference;

    // Constructors
    group_iterator() : _it(), _size(0) {}

    group_iterator(Iterator it, std::size_t size)
        : _it(it), _size(size) {}

    // Members access
    iterator_type base() const { return _it; }

    std::size_t size() const { return _size; };
     // Increment/decrement operators
    group_iterator& operator++() {
        _it += _size;
        return *this;
    }

    group_iterator operator++(int) {
        group_iterator tmp = *this;
        ++(*this);
        return tmp;
    }

    group_iterator& operator--() {
        _it -= _size;
        return *this;
    }

    group_iterator operator--(int) {
        group_iterator tmp = *this;
        --(*this);
        return tmp;
    }

    group_iterator& operator+=(std::size_t increment) {
        _it += _size * increment;
        return *this;
    }

    group_iterator& operator-=(std::size_t increment) {
        _it -= _size * increment;
        return *this;
    }
};

//std::ostream	&operator<<( std::ostream &o, RPN const &rhs);
template<typename Iterator>
group_iterator<Iterator> make_group_iterator(Iterator it, std::size_t size) {
    return group_iterator<Iterator>(it, size);
}

template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last, Compare compare) {
    // Cache differences between Jacobsthal numbers
    // const unsigned long long jacobsthal_diff[] = {
    //     2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u
    // };

    std::size_t size = std::distance(first, last);
    if (size < 2) return;

    bool has_stray = (size % 2 != 0);
    RandomAccessIterator end = has_stray ? last - 1 : last;

    for (RandomAccessIterator it = first; it != end; it += 2) {
        if (compare(it[1], it[0])) {
            std::iter_swap(it, it + 1);
        }
    }

    merge_insertion_sort_impl(make_group_iterator(first, 2), make_group_iterator(end, 2), compare);
}

template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort(RandomAccessIterator first, RandomAccessIterator last, Compare compare) {
    merge_insertion_sort_impl(make_group_iterator(first, 1), make_group_iterator(last, 1), compare);
}