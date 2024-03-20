/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 16:35:38 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <string>

static bool	checkArgv(std::string expression)
{
	for (size_t i = 0; i < expression.length(); ++i)
	{
		if (!std::isspace(expression[i]) || expression[i] != '\0')
		{
			if (std::isdigit(expression[i]) && std::isdigit(expression[i + 1]))
				return (false);
		}
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			RPN	rpn;

			if (!checkArgv(argv[1]))
				throw RPN::InputError();
			rpn.computePostFix(argv[1]);
		}
		catch (RPN::Error& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (RPN::InputError& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (RPN::NullDivisionError& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Error: " << argv[0] << " only takes 1 argument" << std::endl;
	return (0);
}
