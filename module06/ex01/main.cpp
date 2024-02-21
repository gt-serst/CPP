/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:33:09 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/21 12:09:56 by gt-serst         ###   ########.fr       */
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
	std::cout << "Value: " << ptr->value << " Text: " << ptr->text << std::endl;
	delete (ptr);
	return (0);
}
