/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:58:30 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/19 18:26:36 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

bool	isChar(std::string& input)
{
	return (input.length() == 1 && std::isprint(input[0]));
}

bool	isInt(std::string& input)
{
	for (size_t i = (input.at(0) == '-' ? 1 : 0); i < input.length(); i++)
		if (!std::isdigit(input[i]))
			return (false);
	return (true);
}

bool	isFloat(std::string& input)
{
	if (input.compare("-inff") || input.compare("+inff") || input.compare("nanf"))
		return (true);
	for (size_t i = (input.at(0) == '-' ? 1 : 0); i < input.length() - 1; i++)
		if (!std::isdigit(input[i]) && !input[i] != '.')
			return (false);
	if (input[input.length()] != 'f')
		return (false);
	else
		return (true);
}

bool	isDouble(std::string& input)
{
	if (input.compare("-inf") || input.compare("+inf") || input.compare("nan"))
		return (true);
	for (size_t i = (input.at(0) == '-' ? 1 : 0); i < input.length(); i++)
		if (!std::isdigit(input[i]) && !input[i] != '.')
			return (false);
	return (true);
}

void	toChar(std::string& input)
{
	char	char_value = input[0];
	int		int_value = static_cast<int>(char_value);
	float	float_value = static_cast<float>(char_value);
	double	double_value = static_cast<double>(char_value);
	std::cout << char_value << std::endl;
	std::cout << int_value << std::endl;
	std::cout << float_value << "f" << std::endl;
	std::cout << double_value << std::endl;
}

void	toInt(std::string& input)
{
	int	int_value;

	try
	{
		int_value = stoi(input);
		std::cout << int_value << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	char	char_value = static_cast<char>(int_value);
	float	float_value = static_cast<float>(int_value);
	double	double_value = static_cast<double>(int_value);
	std::cout << char_value << std::endl;
	std::cout << float_value << "f" << std::endl;
	std::cout << double_value << std::endl;
}

void	ScalarConverter::convert(std::string& input)
{
	if (isChar(input))
		toChar(input);
	else if (isInt(input))
		toInt(input);
	else if (isFloat(input))
		toFloat(input);
	else if (isDouble(input))
		toDouble(input);
}
