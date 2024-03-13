/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/13 17:05:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <string>
#include <iostream>
#include <algorithm>

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
	{
	}
	return (*this);
}

template<typename T>
PmergeMe<T>::~PmergeMe(void){

	return;
}

template<typename T>
void	PmergeMe<T>::mergeInsertionSort(std::string A){

	std::cout << "Starting Array:" << std::endl;
	std::cout << A << std::endl;

	if (A.length() % 2 != 0)
	{
		bool	hasStraggler = true;
		char	straggler = A[A.length() - 1];
		A.pop_back()
	}
	else
		bool	hasStraggler = false;
	
	T*	split_array = createPairs(A);

	T*	sorted_split_array = sortEachPair(split_array);

	sortByLargerValue(sorted_split_array);
}

template<typename T>
T*	PmergeMe<T>::createPairs(std::string a){

	T*	split_array;
	T*	temp_array;

	for (size_t i = 0; i < a.length() ; i++)
	{
		int	temp_length = temp_array.size();
		if (temp_length == 1)
		{
			temp_array.push_back(a[i]);
			split_array.push_back(temp);
			temp_array.clear();
		}
		else if (split_array.size() * 2 == a.length() - 1)
			split_array.push_back(a[i]);
		else if (temp_length == 0)
			temp_array.push_back(a[i]);
	}
	return (split_array);
}

template<typename T>
T*	PmergeMe<T>::sortEachPair(T* split_array){

	for (T::iterator it = split_array.begin(); it != split_array.end(); ++it)
	{
		T const & pair_array = *it;
		for (T::iterator it_pair = pair_array.begin(); it_pair != pair_array.end(); ++it_pair)
		{
			if (pair_array.size() != 1 && it_pair->first > it_pair->second)
				swap(it_pair->first, it_pair->second);
		}
	}
	return (split_array);
}

template<typename T>
void	PmergeMe<T>::sortByLargerValue(T* sorted_split_array){

	int	length = sorted_split_array.size();

	insertionSortPairs(sorted_split_array, sorted_split_array.size() - 1);
}

template<typename T>
void	PmergeMe<T>::insertionSortPairs(T* A, int n){

	if (n < 1)
		return;
	else
	{
		T::iterator it = A.begin();
		++it;
		insertionSortPairs(A, it);
	}
}

template<typename T>
void	PmergeMe<T>::insertionSortPairs(T* A, T::iterator it){

	if (it == A.end())
		return;
	std::pair<int, int> temp = *it;
	A.erase(it);
	insert(temp, A, A.begin());
	insertionSortPairs(A, ++it);
}

template<typename T>
void	PmergeMe<T>::insert(std::pair<int, int> const & elem, T& A, T::iterator it){

	if (elem.second >= it->second)
		A.insert(++it, elem);
	else
		insert(elem, A, ++it);
}

/*template<typename T>
void	PmergeMe<T>::sorting(char *argv){

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
