/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:27:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:16 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal("Dog"){

	this->_brain = new Brain();
	std::cout << "Default constructor of Dog is called" << std::endl;
	return;
}

Dog::Dog(Dog const & src){

	std::cout << "Copy constructor of Dog called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	return;
}

Dog &	Dog::operator=(Dog const & rhs){

	if (this != &rhs)
	{
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog(void){

	delete this->_brain;
	std::cout << "Destructor of Dog called" << std::endl;
	return;
}

void	Dog::makeSound(void) const{

	std::cout << "WAOUF" << std::endl;
}
