/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:28:24 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 13:41:08 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void){

	std::cout << "Default constructor of ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std:: string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20){

	std::cout << "Constructor of ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap & src){

	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = src;
	return;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs){

	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap(void){

	std::cout << "Destructor of ClapTrap called" << std::endl;
	return;
}

void	ClapTrap::attack(const std::string& target){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "CapTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "CapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "CapTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " heals " << amount << " hit points!" << std::endl;
	_hit_points += amount;
	_energy_points -= 1;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " hit points." << std::endl;
}
