/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:12:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void){

	std::cout << "Default constructor of AMateria called" << std::endl;
	return;
}

AMateria::AMateria(std::string const & materia_type) : type(materia_type){

	std::cout << "Constructor of AMateria called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const & src){

	std::cout << "Copy constructor of AMateria called" << std::endl;
	*this = src;
	return;
}

AMateria &	AMateria::operator=(AMateria const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

AMateria::~AMateria(void){

	std::cout << "Destructor of AMateria called" << std::endl;
	return;
}

std::string const &	AMateria::getType() const{

	return this->type;
}

void AMateria::use(ICharacter &target) {

	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}

