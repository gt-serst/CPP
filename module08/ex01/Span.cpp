/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:11:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/29 10:35:23 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

Span::Span(void){

	return;
}

Span::Span(unsigned int N) : _size(N){

	return;
}

Span::Span(Span const & src){

	this->_vec = src._vec;
	this->_size = src._size;
	*this = src;
	return;
}

Span &	Span::operator=(Span const & rhs){

	this->_vec = rhs._vec;
	this->_size = rhs._size;
	return (*this);
}

Span::~Span(void){

	return;
}

void	Span::addNumber(int number){

	if (this->_vec.size() < this->_size)
		this->_vec.push_back(number);
	else
		throw SpanIsFull();	
}

int	Span::shortestSpan(void){

	if (this->_vec.size() > 1)
	{
		std::vector<int>::const_iterator	it1;
		std::vector<int>::const_iterator	ite1 = this->_vec.end();
		std::vector<int>::const_iterator	it2;
		std::vector<int>::const_iterator	ite2 = this->_vec.end();
		int	dist;
		int	sml_dist = abs(*this->_vec.begin() - *std::next(this->_vec.begin(), 1));
		for (it1 = this->_vec.begin(); it1 != ite1; ++it1)
		{
			for (it2 = this->_vec.begin(); it2 != ite2; ++it2)
			{
				if (it1 != it2)
				{
					dist = abs(*it1 - *it2);
					if (dist < sml_dist)
						sml_dist = dist;
				}
			}
		}
		return (sml_dist);
	}
	else
		throw SpanIsEmpty();
}

int	Span::longestSpan(void){

	if (this->_vec.size() > 1)
		return (*std::max_element(this->_vec.begin(), this->_vec.end()) - 
				*std::min_element(this->_vec.begin(), this->_vec.end()));
	else
		throw SpanIsEmpty();
}

void	Span::addSeveralNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite){

	if (this->_vec.size() < this->_size)
		this->_vec.insert(this->_vec.end(), it, ite);
	else
		throw SpanIsFull();
}

void	Span::display(void){

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = this->_vec.end();
	for (it = this->_vec.begin(); it != ite; ++it)
		std::cout << *it << std::endl;
}
