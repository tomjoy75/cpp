#pragma once

#include <algorithm>
#include <cstddef>
#include <list>
#include <iterator>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>


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

    std::size_t size() const { return _size; }

    // Element access
    reference operator*() const { return _it[_size - 1]; }

    pointer operator->() const { return &operator*(); }

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

    // Elements access operators
    reference operator[](std::size_t pos) {
        return _it[pos * _size + _size - 1];
    }

    const reference operator[](std::size_t pos) const {
        return _it[pos * _size + _size - 1];
    }
};

// Utility functions
template<typename Iterator1, typename Iterator2>
void iter_swap(group_iterator<Iterator1> lhs, group_iterator<Iterator2> rhs) {
    std::swap_ranges(lhs.base(), lhs.base() + lhs.size(), rhs.base());
}

template<typename Iterator1, typename Iterator2>
bool operator==(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() == rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator!=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() != rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator<(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() < rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator<=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() <= rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator>(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() > rhs.base();
}

template<typename Iterator1, typename Iterator2>
bool operator>=(const group_iterator<Iterator1>& lhs, const group_iterator<Iterator2>& rhs) {
    return lhs.base() >= rhs.base();
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(Iterator it, std::size_t size) {
    return group_iterator<Iterator>(it, size);
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(group_iterator<Iterator> it, std::size_t size) {
    return group_iterator<Iterator>(it.base(), size * it.size());
}

// Merge-insertion sort
template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last, Compare compare) {
    // Cache differences between Jacobsthal numbers
    const unsigned long long jacobsthal_diff[] = {
        2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u
    };

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

    std::list<RandomAccessIterator> chain;
    std::list<RandomAccessIterator> pend;

    chain.push_back(first);
    chain.push_back(first + 1);

    for (RandomAccessIterator it = first + 2; it != end; it += 2) {
        pend.push_back(it);
    }

    if (has_stray) {
        pend.push_back(end);
    }

    for (std::size_t k = 0;; ++k) {
        if (k >= sizeof(jacobsthal_diff) / sizeof(jacobsthal_diff[0])) break;

        unsigned long long dist = jacobsthal_diff[k];
        if (dist >= pend.size()) break;

        typename std::list<RandomAccessIterator>::iterator it = pend.begin();
        std::advance(it, dist);

        while (true) {
            typename std::list<RandomAccessIterator>::iterator insertion_point = std::upper_bound(
                chain.begin(), chain.end(), *it,
                compare
            );
            chain.insert(insertion_point, *it);

            pend.erase(it);
            if (it == pend.begin()) break;
            --it;
        }
    }

    std::vector<typename RandomAccessIterator::value_type> cache(size);
    std::copy(chain.begin(), chain.end(), cache.begin());
    std::copy(cache.begin(), cache.end(), first);
}

template<typename RandomAccessIterator, typename Compare>
void merge_insertion_sort(RandomAccessIterator first, RandomAccessIterator last, Compare compare) {
    merge_insertion_sort_impl(make_group_iterator(first, 1), make_group_iterator(last, 1), compare);
}
