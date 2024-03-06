/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:11:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/06 16:51:59 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	try
	{
		Span sp = Span(8);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::vector<int> nums;
		nums.push_back(20);
		nums.push_back(1);
		nums.push_back(2);

		sp.addSeveralNumbers(nums.begin(), nums.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.display();

		sp.addNumber(13);
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
		Span sp;

		sp.shortestSpan();
	}
	catch(Span::SpanIsFull& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Span::SpanIsEmpty& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::vector<int> big(10000);

	for (size_t i = 0; i < 10000; i++) big[i] = i;

	try
	{
		Span sp = Span(10000);
		sp.addSeveralNumbers(big.begin(), big.end());
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

	return (0);
}
