/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:11:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/27 16:45:56 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::SpanIsFull& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Span::SpanIsEmpty& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(100);

		std::list<int>					lst = {};
		std::list<int>::const_iterator	it = lst.begin();
		std::list<int>::const_iterator	ite = lst.end();
		sp.addSeveralNumbers(it, ite);
	}
	catch(Span::SpanIsFull& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Span::SpanIsEmpty& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
