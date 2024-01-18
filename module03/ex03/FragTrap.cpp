/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:56:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 14:16:12 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void){

	std::cout << "Default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){

	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap & src){

	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void){

	std::cout << "Destructor of FragTrap called" << std::endl;
	return;
}

void	FragTrap::attack(const std::string& target){

	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "FragTrap " << _name << " cannot execute any action need to be alive or to have more energy points." << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points -= 1;
}

void	FragTrap::highFivesGuys(void){

	std::cout << "FragTrap " << _name << " requests for high fives." << std::endl;
}
