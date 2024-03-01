/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:43:38 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:21 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void){

	std::cout << "Default constructor of WrongAnimal is called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string animal_type) : type(animal_type){

	std::cout << "Constructor of WrongAnimal is called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){

	std::cout << "Copy constructor of WrongAnimal is called" << std::endl;
	*this = src;
	return;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void){

	std::cout << "Destructor of WrongAnimal called" << std::endl;
	return;
}

std::string const &	WrongAnimal::getType(void) const{

	if (this->type.empty())
		std::cout << "WrongAnimal has no type" << std::endl;
	return this->type;
}

void	WrongAnimal::makeSound(void) const{

	std::cout << "GRRR" << std::endl;
}
