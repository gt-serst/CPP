/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:30:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal("Cat"){

	this->_brain = new Brain();
	std::cout << "Default constructor of Cat called" << std::endl;
	return;
}

Cat::Cat(Cat const & src){

	std::cout << "Copy constructor of Cat called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	return;
}

Cat &	Cat::operator=(Cat const & rhs){

	if (this != &rhs)
	{
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
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
