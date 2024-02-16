/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:12:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/16 12:00:15 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	std::string	input;

	if (ac == 2)
	{
		input = av[1];
		ScalarConverter::convert(input);
	}
	return (0);
}
