/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:32:27 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/21 12:29:36 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <cstdint>

Serializer::Serializer(void){

	return;
}

Serializer::Serializer(Serializer & src){

	*this = src;
	return;
}

Serializer &	Serializer::operator=(Serializer const & rhs){

	return *this;
}

Serializer::~Serializer(void){

	return;
}

uintptr_t	Serializer::serialize(Data* ptr){

	std::uintptr_t raw = reinterpret_cast<std::uintptr_t>(ptr);
	return (raw);
}

Data*	Serializer::deserialize(uintptr_t raw){

	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
