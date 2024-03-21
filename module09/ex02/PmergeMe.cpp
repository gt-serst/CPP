/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/21 09:45:07 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <string>
#include <iostream>
#include <algorithm>
#include <utility>
#include <deque>
#include <vector>

PmergeMe::PmergeMe(void){

	return;
}

PmergeMe::PmergeMe(PmergeMe const & src){

	*this = src;
	return;
}

PmergeMe &	PmergeMe::operator=(PmergeMe const & rhs){

	if (this != &rhs)
	{

	}
	return (*this);
}

PmergeMe::~PmergeMe(void){

	return;
}

void	PmergeMe::mergeInsertionSort(char **argv, std::deque<int>& deq){

	size_t			i;
	int				straggler;
	std::deque<int>	raw_array;

	i = 1;
	while (argv[i])
	{
		raw_array.push_back(std::atoi(argv[i]));
		i++;
	}
	if (raw_array.size() == 1)
	{
		deq = raw_array;
		return;
	}
	if (raw_array.size() % 2 != 0)
	{
		straggler = raw_array.back();
		raw_array.pop_back();
	}
	else
		straggler = -1;

	std::deque< std::pair<int, int> >	sorted_split_array = sortEachPair(raw_array);

	insertionSortPairs(sorted_split_array, sorted_split_array.size() - 1);

	/*std::cout << "Sorted Pairs:" << std::endl;
	for (size_t i = 0; i < sorted_split_array.size(); ++i) {
		std::cout << "(" << sorted_split_array[i].first << ", " << sorted_split_array[i].second << ") ";
	}
	std::cout << std::endl;*/

	deq = createSequence(sorted_split_array, straggler);
}

std::deque< std::pair<int, int> >	PmergeMe::sortEachPair(std::deque<int> raw_array){

	std::deque< std::pair<int, int> >	split_array;

	for (size_t i = 0; i < raw_array.size() - 1; i += 2)
	{
		if (raw_array[i] > raw_array[i + 1])
			std::swap(raw_array[i], raw_array[i + 1]);
		split_array.push_back(std::make_pair(raw_array[i], raw_array[i + 1]));
	}

	/*std::cout << "Pairs:" << std::endl;
	for (size_t i = 0; i < split_array.size(); ++i) {
		std::cout << "(" << split_array[i].first << ", " << split_array[i].second << ") ";
	}
	std::cout << std::endl;*/
	return (split_array);
}

void	PmergeMe::insertionSortPairs(std::deque< std::pair<int, int> >& A, long n){

	if (n < 1)
		return;
	else
	{
		insertionSortPairs(A, n - 1);
		insert(A[n], A, n - 1);
	}
}

void	PmergeMe::insert(std::pair<int, int> element, std::deque< std::pair<int, int> >& A, long n){

	if (n < 0 || element.second > A[n].second)
		A[n + 1] = element;
	else
	{
		A[n + 1] = A[n];
		insert(element, A, n - 1);
	}
}

std::deque<int>	PmergeMe::createSequence(std::deque< std::pair<int, int> > sorted_split_array, int straggler){

	std::deque<int>	S;
	std::deque<int>	pend;

	for (size_t i = 0; i < sorted_split_array.size(); ++i)
	{
		S.push_back(sorted_split_array[i].second);
		pend.push_back(sorted_split_array[i].first);
	}

	/*std::cout << "S:" << std::endl;
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
	std::cout << ")" << std::endl;*/

	size_t	i;

	i = 0;
	while (i < pend.size())
	{
		std::deque<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), pend[i]);
		S.insert(insertion_point, pend[i]);
		i++;
	}
	if (straggler != -1)
	{
		std::deque<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), straggler);
		S.insert(insertion_point, straggler);
	}

	return (S);
}

void	PmergeMe::mergeInsertionSort(char **argv, std::vector<int>& vect){

	size_t				i;
	int					straggler;
	std::vector<int>	raw_array;

	i = 1;
	while (argv[i])
	{
		raw_array.push_back(std::atoi(argv[i]));
		i++;
	}
	if (raw_array.size() == 1)
	{
		vect = raw_array;
		return;
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

	vect = createSequence(sorted_split_array, straggler);
}

std::vector< std::pair<int, int> >	PmergeMe::sortEachPair(std::vector<int> raw_array){

	std::vector< std::pair<int, int> >	split_array;

	for (size_t i = 0; i < raw_array.size() - 1; i += 2)
	{
		if (raw_array[i] > raw_array[i + 1])
			std::swap(raw_array[i], raw_array[i + 1]);
		split_array.push_back(std::make_pair(raw_array[i], raw_array[i + 1]));
	}

	return (split_array);
}

void	PmergeMe::insertionSortPairs(std::vector< std::pair<int, int> >& A, long n){

	if (n < 1)
		return;
	else
	{
		insertionSortPairs(A, n - 1);
		insert(A[n], A, n - 1);
	}
}

void	PmergeMe::insert(std::pair<int, int> element, std::vector< std::pair<int, int> >& A, long n){

	if (n < 0 || element.second > A[n].second)
		A[n + 1] = element;
	else
	{
		A[n + 1] = A[n];
		insert(element, A, n - 1);
	}
}

std::vector<int>	PmergeMe::createSequence(std::vector< std::pair<int, int> > sorted_split_array, int straggler){

	std::vector<int>	S;
	std::vector<int>	pend;

	for (size_t i = 0; i < sorted_split_array.size(); ++i)
	{
		S.push_back(sorted_split_array[i].second);
		pend.push_back(sorted_split_array[i].first);
	}

	size_t	i;

	i = 0;
	while (i < pend.size())
	{
		std::vector<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), pend[i]);
		S.insert(insertion_point, pend[i]);
		i++;
	}
	if (straggler != -1)
	{
		std::vector<int>::iterator insertion_point = std::upper_bound(S.begin(), S.end(), straggler);
		S.insert(insertion_point, straggler);
	}

	return (S);
}
