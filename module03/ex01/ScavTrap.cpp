/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:19:52 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 14:16:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void){

	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){

	std::cout << "Constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src){

	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = src;
	return;
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
}

void	ScavTrap::guardGate(){

	std::cout << "ScavTrap " << _name << " has entered gate keeper mode." << std::endl;
}
