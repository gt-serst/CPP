/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:50:01 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 12:29:21 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(void){

	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	//std::cout << "Default constructor of Character called" << std::endl;
	return;
}

Character::Character(std::string character_name) : _name(character_name){

	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	//std::cout << "Constructor of Character called" << std::endl;
	return;
}

Character::Character(Character & src){

	int	i;

	//std::cout << "Copy constructor of Character called" << std::endl;	
	i = 0;
	while (i < 4 && src._inventory[i] != NULL)
	{
		_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	*this = src;
	return;
}

Character &	Character::operator=(Character const & rhs){

	int	i;

	this->_name = rhs._name;
	i = 0;
	while (i < 4 && _inventory[i] != NULL)
	{
		delete _inventory[i];
		i++;
	}
	i = 0;
	while (i < 4 && rhs._inventory[i] != NULL)
	{
		_inventory[i] = rhs._inventory[i]->clone();
		i++;
	}
	return (*this);
}

Character::~Character(void){

	int	i;

	i = 0;
	while (i < 4 && _inventory[i] != NULL)
	{
		delete _inventory[i];
		i++;
	}
	//std::cout << "Destructor of Character called" << std::endl;
	return;
}

std::string const &	Character::getName() const{

	return this->_name;
}

void	Character::equip(AMateria* m){

	int	i;

	i = 0;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break;
		}
		i++;
	}
}

void	Character::unequip(int idx){

	if (idx < 4 && _inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target){

	if (idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
