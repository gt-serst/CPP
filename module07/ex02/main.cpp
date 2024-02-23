/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:54:06 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/23 17:32:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	Array<int> int_array(10);
	//Array<std::string> string_array(20);

	std::cout << int_array.size() << std::endl;
	//std::cout << string_array.size() << std::endl;
	return (0);
}