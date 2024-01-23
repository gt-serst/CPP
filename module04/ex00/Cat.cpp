/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:30:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 11:51:47 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void){

	std::cout << "Default constructor of Cat called" << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type){

	std::cout << "Constructor of Cat called" << std::endl;
	return;
}

Cat::Cat(Cat & src){

	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = src;
	return;
}

Cat &	Cat::operator=(Cat const & rhs){

	this->type = rhs.type;
	return *this;
}

Cat::~Cat(void){

	std::cout << "Destructor of Cat called" << std::endl;
	return;
}

void	Cat::makeSound(void) const{

	std::cout << "MIAOW" << std::endl;
}
