/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:54:06 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:31:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	try
	{
		Array<int> default_array;
		Array<int> int_array(10);
		Array<std::string> string_array(10);

		std::cout << default_array.size() << std::endl;
		std::cout << int_array.size() << std::endl;
		std::cout << string_array.size() << std::endl;
	}
	catch (Array<int>::IndexOutOfBoundsException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Array<int> int_array(10);
		int_array[0] = 19;

		std::cout << int_array[0] << std::endl;
	}
	catch (Array<int>::IndexOutOfBoundsException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Array<int> int_array(10);
		int_array[-2] = 0;
	}
	catch (Array<int>::IndexOutOfBoundsException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
