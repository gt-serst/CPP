/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readInputFile.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:07:45 by gt-serst          #+#    #+#             */
/*   Updated: 2024/05/08 13:51:03 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	replaceOccurence(std::string buf, std::string filename, std::string str_to_find, std::string replacement_str);

bool	readInputFile(char **argv)
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
	if (!replaceOccurence(buffer, argv[1], argv[2], argv[3]))
		return (delete[] buffer, false);
	delete[] buffer;
	return (true);
}
