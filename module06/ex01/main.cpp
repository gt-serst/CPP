/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:33:09 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/20 12:07:42 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(int ac, char **av)
{
	Data		*ptr;
	uintptr_t	raw;
	Data		*new_ptr;

	ptr = new Data;
	ptr->value = 42;
	ptr->text = "Hello World!";
	raw = Serializer::serialize(ptr);
	new_ptr = Serializer::deserialize(raw);
	std::cout << "Value:" << ptr->value << " Text: " << ptr->text << std::endl;
	delete (ptr);
	return (0);
}
