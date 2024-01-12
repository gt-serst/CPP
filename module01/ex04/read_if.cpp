/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:56:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 15:51:50 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	replace_occ(char **argv, char *buffer);

bool	read_if(char **argv)
{
	int	length;
	std::ifstream ifs;

	ifs.open(argv[1], std::ifstream::binary);
  	if (ifs)
	{
    	ifs.seekg (0, ifs.end);
    	length = ifs.tellg();
    	ifs.seekg (0, ifs.beg);
	}
	else
		return (std::cout << "error: cannot open the file" << std::endl, false);
	char *buffer = new char [length];
    ifs.read (buffer, length);
    if (!ifs)
		return (std::cout << "error: cannot read all the characters" << std::endl, false);	
    ifs.close();
	if (!replace_occ(argv, buffer))
		return (delete[] buffer, false);
    delete[] buffer;
	return (true);
}
