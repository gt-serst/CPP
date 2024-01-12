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

HumanA::HumanA(std::string humanName, Weapon& weaponREF) : _name(humanName), _weapon(weaponREF){

	std::cout << "Constructor called for HumanA" << std::endl;
	return;
}

HumanA::~HumanA(void){

	std::cout << "Destructor called for HumanA" << std::endl;
	return;
}

void	HumanA::attack(void){

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

