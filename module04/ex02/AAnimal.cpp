/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:37:39 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:18:50 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void){

	std::cout << "Default constructor of AAnimal is called" << std::endl;
	return;
}

AAnimal::AAnimal(std::string animal_type) : type(animal_type){

	std::cout << "Constructor of AAnimal is called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & src){

	std::cout << "Copy constructor of AAnimal is called" << std::endl;
	*this = src;
	return;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal(void){

	std::cout << "Destructor of AAnimal called" << std::endl;
	return;
}

std::string const &	AAnimal::getType(void) const{

	if (this->type.empty())
		std::cout << "AAnimal has no type" << std::endl;
	return this->type;
}

void	AAnimal::makeSound(void) const{

	std::cout << "GRRR" << std::endl;
}
