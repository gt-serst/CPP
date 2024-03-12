/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/12 14:03:42 by gt-serst         ###   ########.fr       */
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
	return (0);
}
