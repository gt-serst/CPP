/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:30:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 11:53:29 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void){

	std::cout << "Default constructor of WrongCat called" << std::endl;
	return;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){

	std::cout << "Constructor of WrongCat called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat & src){

	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs){

	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat(void){

	std::cout << "Destructor of WrongCat called" << std::endl;
	return;
}

void	WrongCat::makeSound(void) const{

	std::cout << "MIAOW" << std::endl;
}
