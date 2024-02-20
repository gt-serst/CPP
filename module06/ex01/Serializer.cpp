/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:32:27 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/20 11:54:45 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>
#include <cstdint>

uintptr_t serialize(Data* ptr){

	std::uintptr_t raw = reinterpret_cast<std::uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw){

	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
