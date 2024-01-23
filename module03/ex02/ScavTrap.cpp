/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:19:52 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/22 13:21:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void){

	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src){

	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = src;
	return;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs){

	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

ScavTrap::~ScavTrap(void){

	std::cout << "Destructor of ScavTrap called" << std::endl;
	return;
}

void	ScavTrap::attack(const std::string& target){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points -= 1;
	std::cout << "ScavTrap " << _name << " has " << _energy_points << " energy points left." << std::endl;
}

void	ScavTrap::guardGate(){

	std::cout << "ScavTrap " << _name << " has entered gate keeper mode." << std::endl;
}
