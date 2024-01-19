/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:49:08 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 11:15:31 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponREF) : _name(name), _weapon(weaponREF){

	std::cout << "Constructor of HumanA called" << std::endl;
	return;
}

HumanA::~HumanA(void){

	std::cout << "Destructor of HumanA called" << std::endl;
	return;
}

void	HumanA::attack(void){

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

