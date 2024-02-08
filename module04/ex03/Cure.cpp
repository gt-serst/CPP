/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 14:39:44 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include <string>

Cure::Cure(void) : AMateria("cure"){

	std::cout << "Default constructor of Cure called" << std::endl;
	return;
}

Cure::Cure(Cure & src){

	std::cout << "Copy constructor of Cure called" << std::endl;
	*this = src;
	return;
}

Cure &	Cure::operator=(Cure const & rhs){

	this->type = rhs.type;
	return (*this);
}

Cure::~Cure(void){

	std::cout << "Destructor of Cure called" << std::endl;
	return;
}

AMateria*	Cure::clone() const{

	return new Cure();
}

void	Cure::use(ICharacter& target){

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}