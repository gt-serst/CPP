/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:57 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include <string>

Cure::Cure(void) : AMateria("cure"){

	std::cout << "Default constructor of Cure called" << std::endl;
	return;
}

Cure::Cure(Cure const const & src) : AMateria("cure"){

	std::cout << "Copy constructor of Cure called" << std::endl;
	*this = src;
	return;
}

Cure &	Cure::operator=(Cure const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Cure::~Cure(void){

	std::cout << "Destructor of Cure called" << std::endl;
	return;
}

AMateria*	Cure::clone() const{

	return new Cure(*this);
}

void	Cure::use(ICharacter& target){

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
