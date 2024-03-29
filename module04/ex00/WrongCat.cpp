/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:30:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:17:35 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){

	std::cout << "Default constructor of WrongCat called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & src){

	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = src;
	return;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat(void){

	std::cout << "Destructor of WrongCat called" << std::endl;
	return;
}

void	WrongCat::makeSound(void) const{

	std::cout << "MIAOUW" << std::endl;
}
