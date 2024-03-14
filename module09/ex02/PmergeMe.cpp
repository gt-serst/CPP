/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/14 12:27:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_CPP
# define PMERGEME_CPP
# include "PmergeMe.hpp"
# include <string>
# include <iostream>
# include <algorithm>
# include <utility>
#include <vector>

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

	std::vector< std::pair<int, int> >	split_array = insertionSort(raw_array);

	//T	sorted_split_array = sortEachPair(split_array);

	//std::vector< std::pair<int, int> >	sorted_split_array = sortByLargerValue(split_array);
}

template<typename T>
std::vector< std::pair<int, int> >	PmergeMe<T>::insertionSort(T raw_array){

	std::vector< std::pair<int, int> >	split_array;

	for (size_t i = 0; i < raw_array.size() - 1; i += 2)
	{
		if (raw_array[i] > raw_array[i + 1])
			std::swap(raw_array[i], raw_array[i + 1]);
		split_array.push_back(std::make_pair(raw_array[i], raw_array[i + 1]));
	}
	std::pair<int, int> first_pair = split_array.front();
	std::pair<int, int> last_pair = split_array.back();

	std::cout << "First pair : (" << first_pair.first << ", " << first_pair.second << ")" << std::endl;
	std::cout << "Last pair : (" << last_pair.first << " , " << last_pair.second << ")" << std::endl;
	return (split_array);
}

void	PmergeMe<T>::jacobshtalNumbers(void){


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
