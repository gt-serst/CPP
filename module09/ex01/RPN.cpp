/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:20 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/12 14:03:45 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <string>
#include <iterator>
#include <stack>
#include <iostream>

RPN::RPN(void){

	return;
}

RPN::RPN(RPN const & src){

	*this = src;
	return;
}

RPN &	RPN::operator=(RPN const & rhs){

	this->_stk = rhs._stk;
	return (*this);
}

RPN::~RPN(void){

	return;
}

void	RPN::computePostFix(std::string expr){

	int						a;
	int						b;
	std::string::iterator	it;

	for (it = expr.begin(); it != expr.end(); ++it)
	{
		if (isOperator(*it) == 1)
		{
			a = _stk.top();
			_stk.pop();
			b = _stk.top();
			_stk.pop();
			_stk.push(operation(a, b, *it));
		}
		else if(isOperand(*it) == 1)
			_stk.push(ctoi(*it));
		else if (!isspace(*it))
		   throw RPN::Error();
	}
	std::cout << _stk.top() << std::endl;
}

int	RPN::isOperator(char c){

	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (1);
	return (0);
}

int	RPN::isOperand(char c){

	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	RPN::ctoi(char c){

	int value;

	value = c;
	return (static_cast<int>(value - '0'));
}

int	RPN::operation(int a, int b, char op){

	if (op == '+')
		return (b + a);
	else if (op == '-')
		return (b - a);
	else if (op == '/')
		return (b / a);
	else if (op == '*')
		return (b * a);
	else
		throw RPN::Error();
}
