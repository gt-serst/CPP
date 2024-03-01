/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:27:44 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:20:02 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include <string>

Ice::Ice(void) : AMateria("ice"){

	std::cout << "Default constructor of Ice called" << std::endl;
	return;
}

Ice::Ice(Ice const & src) : AMateria("ice"){

	std::cout << "Copy constructor of Ice called" << std::endl;
	*this = src;
	return;
}

Ice &	Ice::operator=(Ice const & rhs){

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Ice::~Ice(void){

	std::cout << "Destructor of Ice called" << std::endl;
	return;
}

AMateria*	Ice::clone() const{

	return new Ice();
}

void	Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
