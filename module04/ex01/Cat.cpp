/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:30:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 09:03:45 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void){

	this->_brain = new Brain();
	std::cout << "Default constructor of Cat called" << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type){

	this->_brain = new Brain();
	std::cout << "Constructor of Cat called" << std::endl;
	return;
}

Cat::Cat(Cat & src){

	std::cout << "Copy constructor of Cat called" << std::endl;
	this->_brain = new Brain(*src._brain);
	*this = src;
	return;
}

Cat &	Cat::operator=(Cat const & rhs){

	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Cat::~Cat(void){

	delete this->_brain;
	std::cout << "Destructor of Cat called" << std::endl;
	return;
}

void	Cat::makeSound(void) const{

	std::cout << "MIAOUW" << std::endl;
}
