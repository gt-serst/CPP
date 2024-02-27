/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:11:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/27 16:46:00 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>

Span::Span(void){

	return;
}

Span::Span(unsigned int N) : _size(N){

	return;
}

Span::Span(Span const & src){

	this->_lst = src._lst;
	this->_size = src._size;
	*this = src;
	return;
}

Span &	Span::operator=(Span const & rhs){

	this->_lst = rhs._lst;
	this->_size = rhs._size;
	return (*this);
}

Span::~Span(void){

	return;
}

void	Span::addNumber(int number){

	if (this->_lst.size() < this->_size)	
		this->_lst.push_back(number);
	else
		throw SpanIsFull();
}

int	Span::shortestSpan(void){

	if (this->_lst.size() > 1)
	{
		std::list<int>::const_iterator	it1;
		std::list<int>::const_iterator	ite1 = this->_lst.end();
		std::list<int>::const_iterator	it2;
		std::list<int>::const_iterator	ite2 = this->_lst.end();
		int	dist;
		int	sml_dist = *this->_lst.begin() - *std::next(this->_lst.begin(), 1);
		for (it1 = this->_lst.begin(); it1 != ite1; ++it1)
		{
			for (it2 = this->_lst.begin(); it2 != ite2; ++it2)
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

	if (this->_lst.size() > 1)
		return (*std::max_element(this->_lst.begin(), this->_lst.end()) - 
				*std::min_element(this->_lst.begin(), this->_lst.end()));
	else
		throw SpanIsEmpty();
}

void	Span::addSeveralNumbers(std::list<int>::const_iterator it, std::list<int>::const_iterator ite){

	if (this->_size() < this->_size)
	{
		while (it != ite)
		{
			this->_lst.push_back(*it);
			it++;
		}
	else
		throw SpanIsFull();
}
