#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void){

	std::cout << "Default constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(ClapTrap::_name + "_clap_name", FragTrap::_hit_points, ScavTrap::_energy_points, FragTrap::_attack_damage), ScavTrap(name), FragTrap(name){

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
