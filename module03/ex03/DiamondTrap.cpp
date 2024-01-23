/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:24:19 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 14:24:20 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void){

	std::cout << "Default constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name){

	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "Constructor of DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap & src){

	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs){

	this->_name = rhs._name;
	return *this;
}

DiamondTrap::~DiamondTrap(void){

	std::cout << "Destructor of DiamondTrap called" << std::endl;
	return;
}

void	DiamondTrap::whoAmI(void){

	std::cout << "My name is " << _name << std::endl;
	std::cout << "My sub object's name is " << ClapTrap::_name << std::endl;
}
