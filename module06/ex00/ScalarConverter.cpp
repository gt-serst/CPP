/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:58:30 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/16 17:16:33 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

void	ScalarConverter::convert(std::string& input){

	char	to_char = '\0';
	int		to_int;
	float	to_float;
	double	to_double;

	if (input.length() == 1 && isalpha(input[0]))
	{
		to_char = input[0];
		to_int = static_cast<int>(to_char);
		to_float = static_cast<float>(to_char);
		to_double = static_cast<double>(to_char);
	}
	else
	{
		if (input.find('.') != std::string::npos)
		{
			if (input.find('f') != std::string::npos)
			{
				to_float = std::stof(input);
				to_int = static_cast<int>(to_float);
				to_double = static_cast<double>(to_float);
			}
			else
			{
				to_double = std::stod(input);
				to_int = static_cast<int>(to_double);
				to_float = static_cast<float>(to_double);
			}
		}
		else
		{
			if (input.length() > 9)
			{
				std::cout << "Type conversion is impossible" << std::endl;
				return;
			}
			else
			{
				to_int = stoi(input);
				to_float = static_cast<float>(to_int);
				to_double = static_cast<double>(to_int);
			}
		}
	}
	if (to_char == '\0')
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << to_char << std::endl;
	std::cout << "int: " << to_int << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(input.size() - input.find('.') - 1) << to_float << "f" << std::endl;
	std::cout << "double: " << to_double << std::endl;
}
