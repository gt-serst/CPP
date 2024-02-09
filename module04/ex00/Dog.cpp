/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:27:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 11:06:45 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog"){

	std::cout << "Default constructor of Dog is called" << std::endl;
	return;
}

Dog::Dog(Dog & src){

	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = src;
	return;
}

Dog &	Dog::operator=(Dog const & rhs){

	this->type = rhs.type;
	return *this;
}

Dog::~Dog(void){

	std::cout << "Destructor of Dog called" << std::endl;
	return;
}

void	Dog::makeSound(void) const{

	std::cout << "WAOUF" << std::endl;
}
