/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:57:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 11:36:20 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){

	std::cout << "Constructor of Human B called" << std::endl;
	return;
}

HumanB::~HumanB(void){

	std::cout << "Destructor of HumanB called" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	return;
}

void	HumanB::attack(void){

	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

