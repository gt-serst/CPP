/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:12:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/19 20:50:06 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
