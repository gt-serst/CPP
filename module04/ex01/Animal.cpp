/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:10 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/05 16:36:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void){

	std::cout << "Default constructor of Animal is called" << std::endl;
	return;
}

Animal::Animal(std::string animal_type) : type(animal_type){

	std::cout << "Constructor of Animal is called" << std::endl;
	return;
}

Animal::Animal(Animal & src){

	std::cout << "Copy constructor of Animal is called" << std::endl;
	*this = src;
	return;
}

Animal &	Animal::operator=(Animal const & rhs){

	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void){

	std::cout << "Destructor of Animal called" << std::endl;
	return;
}

std::string const &	Animal::getType(void) const{

	if (this->type.empty())
		std::cout << "Animal has no type" << std::endl;
	return this->type;
}

void	Animal::makeSound(void) const{

	std::cout << "GRRR" << std::endl;
}
