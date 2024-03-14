/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/14 15:49:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_CPP
# define PMERGEME_CPP
# include "PmergeMe.hpp"
# include <string>
# include <iostream>
# include <algorithm>
# include <utility>
# include <vector>

template<typename T>
PmergeMe<T>::PmergeMe(void){

	return;
}

template<typename T>
PmergeMe<T>::PmergeMe(PmergeMe const & src){

	*this = src;
	return;
}

template<typename T>
PmergeMe<T> &	PmergeMe<T>::operator=(PmergeMe const & rhs){

	if (this != &rhs)
		this->_S = rhs._S;
	return (*this);
}

template<typename T>
PmergeMe<T>::~PmergeMe(void){

	return;
}

template<typename T>
void	PmergeMe<T>::mergeInsertionSort(char **argv){

	std::cout << "Starting Array:" << std::endl;

	T	raw_array;
	int	i = 1;
	while (argv[i])
	{
		std::cout << argv[i] << std::endl;
		raw_array.push_back(std::atoi(argv[i]));
		i++;
	}

	std::vector< std::pair<int, int> >	sorted_split_array = sortEachPair(raw_array);
	
	insertionSortPairs(sorted_split_array, sorted_split_array.size() - 1);
	
	std::cout << "Sorted Pairs:" << std::endl;
	for (size_t i = 0; i < sorted_split_array.size(); ++i) {
        std::cout << "(" << sorted_split_array[i].first << ", " << sorted_split_array[i].second << ") ";
    }
	std::cout << std::endl;	
}

template<typename T>
std::vector< std::pair<int, int> >	PmergeMe<T>::sortEachPair(T raw_array){

	std::vector< std::pair<int, int> >	split_array;

	for (size_t i = 0; i < raw_array.size() - 1; i += 2)
	{
		if (raw_array[i] > raw_array[i + 1])
			std::swap(raw_array[i], raw_array[i + 1]);
		split_array.push_back(std::make_pair(raw_array[i], raw_array[i + 1]));
	}

	std::cout << "Pairs:" << std::endl;
	for (size_t i = 0; i < split_array.size(); ++i) {
        std::cout << "(" << split_array[i].first << ", " << split_array[i].second << ") ";
    }
	std::cout << std::endl;
	return (split_array);
}

template<typename T>
void	PmergeMe<T>::insertionSortPairs(std::vector< std::pair<int, int> >& A, long n){

	if (n < 1)
		return;
	else
	{
		insertionSortPairs(A, n - 1);
		insert(A[n], A, n - 1);
	}
}

template<typename T>
void	PmergeMe<T>::insert(std::pair<int, int> element, std::vector< std::pair<int, int> >& A, long n){

	if (n < 0 || element.second > A[n].second)
		A[n + 1] = element;
	else
	{
		A[n + 1] = A[n];
		insert(element, A, n - 1);
	}
}

/*template<typename T>
void	PmergeMe<T>::mergeInsertionSort(char **argv){

	//insertionSort();
	//jacobsthaNumbers();
	//mergeSort();
	//binarySearch();
}

template<typename T>
void	PmergeMe<T>::insertionSort(void){

	//insertion sort between two elem from pairs
	//use std::make_pairs function to generate pairs et push them into container
}

template<typename T>
void	PmergeMe<T>::jacobsthalNumbers(void){

	//determining the exact insertion point
}

template<typename T>
void	PmergeMe<T>::mergeSort(void){

	//merge sort between pairs, keep the greatest elements from each pairs and push the lowest from each pairs in another recipient
	//recursive function with left then with right elem
}

template<typename T>
void	PmergeMe<T>::binarySearch(void){

	//binary search with the indexes compute during the Jacobsthal sequence
}*/
#endif
