/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/20 15:21:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			RPN	rpn;

			rpn.computePostFix(argv[1]);
		}
		catch (RPN::Error& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Error: " << argv[0] << " only takes 1 argument" << std::endl;
	return (0);
}
