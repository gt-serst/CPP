/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:56:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:16:26 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void){

	std::cout << "Default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src){

	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs){

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap(void){

	std::cout << "Destructor of FragTrap called" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void){

	std::cout << "FragTrap " << _name << " requests for high fives." << std::endl;
}
