/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:20 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 16:35:44 by gt-serst         ###   ########.fr       */
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

	if (this != &rhs)
		this->_stk = rhs._stk;
	return (*this);
}

RPN::~RPN(void){

	return;
}

void	RPN::computePostFix(std::string expr){

	int						right;
	int						left;
	std::string::iterator	it;

	for (it = expr.begin(); it != expr.end(); ++it)
	{
		if (isOperator(*it) == 1)
		{
			if (this->_stk.empty() || this->_stk.size() < 2)
				throw RPN::Error();
			right = _stk.top();
			_stk.pop();
			left = _stk.top();
			_stk.pop();
			_stk.push(operation(right, left, *it));
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

int	RPN::operation(int right, int left, char op){

	if (op == '+')
		return (left + right);
	else if (op == '-')
		return (left - right);
	else if (op == '/')
	{
		if (right == 0)
			throw(RPN::NullDivisionError());
		return (left / right);
	}
	else if (op == '*')
		return (left * right);
	else
		throw RPN::Error();
}
