/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:28:24 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:15:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void){

	std::cout << "Default constructor of ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std:: string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){

	std::cout << "Constructor of ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src){

	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = src;
	return;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs){

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void){

	std::cout << "Destructor of ClapTrap called" << std::endl;
	return;
}

void	ClapTrap::attack(const std::string& target){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points -= 1;
	std::cout << "ClapTrap " << _name << " has " << _energy_points << " energy points left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (_hit_points <= amount)
	{
		_hit_points = 0;
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " heals " << amount << " hit points!" << std::endl;
	_hit_points += amount;
	std::cout << "ClapTrap " << _name << " has now " << _hit_points << " hit points." << std::endl;
	_energy_points -= 1;
	std::cout << "ClapTrap " << _name << " has " << _energy_points << " energy points left." << std::endl;
}
