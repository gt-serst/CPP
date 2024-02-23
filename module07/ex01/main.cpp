/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:56:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/23 13:09:42 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main(void)
{
	//int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	std::string	array[] = {"Hello", "my", "name", "is", "Johnny", "."};

	//iter<int, void(*)(int&)>(array, sizeof(array)/sizeof(array[0]), f);
	iter<std::string, void(*)(std::string&)>(array, sizeof(array)/sizeof(array[0]), f);
	for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++)
		std::cout << array[i] << std::endl;
	return (0);
}
