/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:50:01 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 23:25:55 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(void){

	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	std::cout << "Default constructor of Character called" << std::endl;
	return;
}

Character::Character(std::string character_name) : _name(character_name){

	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	std::cout << "Constructor of Character called" << std::endl;
	return;
}

Character::Character(Character & src){

	int	i;

	std::cout << "Copy constructor of Character called" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	*this = src;
	return;
}

Character &	Character::operator=(Character const & rhs){

	int	i;

	this->_name = rhs._name;
	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		i++;
	}
	return (*this);
}

Character::~Character(void){

	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		i++;
	}
	std::cout << "Destructor of Character called" << std::endl;
	return;
}

std::string const &	Character::getName() const{

	return this->_name;
}

void	Character::equip(AMateria* m){

	int	i;

	if (!m)
		return;
	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
		i++;
	}
	ft_gc(m, false);
}

void	Character::unequip(int idx){

	if (idx < 4 && this->_inventory[idx] != NULL)
	{
		ft_gc(this->_inventory[idx], false);
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target){

	if (idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
