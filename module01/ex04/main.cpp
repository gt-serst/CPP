/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:45:21 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 14:18:26 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	read_if(char **argv);

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	
	if (argc == 4)
	{
		if (!read_if(argv))
			return (1);
	}
	return (0);
}
