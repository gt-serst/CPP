/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:38:51 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 11:20:02 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : _type(weaponType){

	std::cout << "Constructor called for Weapon" << std::endl;
	return;
}

Weapon::~Weapon(void){

	std::cout << "Destructor called for Weapon" << std::endl;
	return;
}

std::string const &	Weapon::getType(){

	return this->_type;
}

void	Weapon::setType(std::string newType){

	this->_type = newType;
	return;
}


