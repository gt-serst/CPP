/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:33:09 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/23 11:48:02 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>
#include <cstdint>

int	main(void)
{
	Data		*ptr;
	uintptr_t	raw;
	Data		*new_ptr;

	ptr = new Data;
	ptr->value = 19;
	ptr->text = "Hello World!";
	raw = Serializer::serialize(ptr);
	new_ptr = Serializer::deserialize(raw);
	std::cout << "Value of ptr: " << ptr->value << " Text of ptr: " << ptr->text << std::endl;
	std::cout << "The pointer's memory address into an integer value: " << raw << std::endl;
	std::cout << "Value of new ptr: " << new_ptr->value << " Text of new ptr: " << new_ptr->text << std::endl;
	delete (ptr);
	return (0);
}
