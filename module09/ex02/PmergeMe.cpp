/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/15 12:01:44 by gt-serst         ###   ########.fr       */
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

	T	raw_array;
	int	straggler;

	std::cout << "Starting Array:" << std::endl;

	int	i = 1;
	while (argv[i])
	{
		std::cout << argv[i] << std::endl;
		raw_array.push_back(std::atoi(argv[i]));
		i++;
	}

	if (raw_array.size() % 2 != 0)
	{
		straggler = raw_array.back();
		raw_array.pop_back();
	}
	else
		straggler = -1;

	std::vector< std::pair<int, int> >	sorted_split_array = sortEachPair(raw_array);
	
	insertionSortPairs(sorted_split_array, sorted_split_array.size() - 1);
	
	std::cout << "Sorted Pairs:" << std::endl;
	for (size_t i = 0; i < sorted_split_array.size(); ++i) {
        std::cout << "(" << sorted_split_array[i].first << ", " << sorted_split_array[i].second << ") ";
    }
	std::cout << std::endl;

	this->_S = createSequence(sorted_split_array, straggler);
	
	std::cout << "Sorted Array:" << std::endl;
	std::cout << "(";
	for (size_t i = 0; i < this->_S.size(); ++i) {
        std::cout <<  this->_S[i];
		if (i < this->_S.size() - 1)
			std::cout << ", ";
    }
	std::cout << ")" << std::endl;
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

template<typename T>
T	PmergeMe<T>::createSequence(std::vector< std::pair<int, int> > sorted_split_array, int straggler){

	T	S;
	T	pend;
	
	for (size_t i = 0; i < sorted_split_array.size(); ++i)
	{
		S.push_back(sorted_split_array[i].second);
		pend.push_back(sorted_split_array[i].first);
	}
	
	std::cout << "S:" << std::endl;
	std::cout << "(";
	for (size_t i = 0; i < S.size(); ++i) {
        std::cout <<  S[i];
		if (i < S.size() - 1)
			std::cout << ", ";
    }
	std::cout << ")" << std::endl;

	std::cout << "Pend:" << std::endl;
	std::cout << "(";
	for (size_t i = 0; i < pend.size(); ++i) {
        std::cout <<  pend[i];
		if (i < pend.size() - 1)
			std::cout << ", ";
    }
	std::cout << ")" << std::endl;

	S.insert(S.begin(), pend[0]);

	std::vector<long>	jacob_insertion_sequence = buildJacobInsertionSequence(pend);

	if (!jacob_insertion_sequence.empty())
	{
		std::cout << "Jacobsthal numbers:" << std::endl;
		std::cout << "(";
		for (size_t i = 0; i < jacob_insertion_sequence.size(); ++i) {
        	std::cout <<  jacob_insertion_sequence[i];
			if (i < jacob_insertion_sequence.size() - 1)
				std::cout << ", ";
    	}
		std::cout << ")" << std::endl;
	}

	unsigned long		i = 0;
	int					jacob_index = 3;
	std::vector<long>	index_sequence;
	std::string			last = "default";
	int					item;
	index_sequence.push_back(1);

	while (i <= pend.size())
	{
		if (!jacob_insertion_sequence.empty() && !last.compare("jacob"))
		{
			index_sequence.push_back(jacob_insertion_sequence[0]);
			item = pend[jacob_insertion_sequence[0] - 1];
			jacob_insertion_sequence.erase(jacob_insertion_sequence.begin());
			last = "jacob";
		}
		else
		{
			if (std::find(index_sequence.begin(), index_sequence.end(), i) != index_sequence.end())
            	i++;
			item = pend[i - 1];
			index_sequence.push_back(i);
			last = "not-jacob";
		}
		
		std::vector<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), item);

		S.insert(insertion_point, item);

		i++;
		jacob_index++;
	}

	if (straggler != -1)
	{
		std::vector<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), straggler);
		S.insert(insertion_point, straggler);
	}

	return (S);
}

template<typename T>
std::vector<long>	PmergeMe<T>::buildJacobInsertionSequence(T pend){

	long				len = pend.size();
	std::vector<long>	end_sequence;
	long				jacob_index = 3;

	std::cout << jacobsthal(jacob_index) << std::endl;
	std::cout << len << std::endl;
	while (jacobsthal(jacob_index) < len - 1)
	{
		end_sequence.push_back(jacobsthal(jacob_index));
		jacob_index += 1;
	}
	return (end_sequence);
}

template<typename T>
long	PmergeMe<T>::jacobsthal(long n){

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));	
}

#endif
