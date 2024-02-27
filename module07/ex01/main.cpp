/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:56:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/27 11:12:23 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main(void)
{
	int			int_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	std::string	string_array[] = {"Hello", "my", "name", "is", "Johnny", "."};
	char		char_array[] = {'a', 'b', 'c', 'd', 'e'};

	iter<int, void(*)(int&)>(int_array, sizeof(int_array)/sizeof(int_array[0]), f);
	iter<std::string, void(*)(std::string&)>(string_array, sizeof(string_array)/sizeof(string_array[0]), f);
	iter<char, void(*)(char&)>(char_array, sizeof(char_array)/sizeof(char_array[0]), f);
	for (size_t i = 0; i < sizeof(int_array)/sizeof(int_array[0]); i++)
		std::cout << int_array[i] << std::endl;
	for (size_t i = 0; i < sizeof(string_array)/sizeof(string_array[0]); i++)
		std::cout << string_array[i] << std::endl;
	for (size_t i = 0; i < sizeof(char_array)/sizeof(char_array[0]); i++)
		std::cout << char_array[i] << std::endl;
	return (0);
}
