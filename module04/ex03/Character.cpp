/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:50:01 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/06 18:01:14 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character(void){

	std::cout << "Default constructor of Character called" << std::endl;
	return;
}

Character::Character(std::string character_name) : _name(character_name){

	_inventory = NULL;
	std::cout << "Constructor of Character called" << std::endl;
	return;
}

Character::Character(Character & src){

	std::cout << "Copy constructor of Character called" << std::endl;
	*this = src;
	return;
}

Character &	Character::operator=(Character const & rhs){

	this->name = rhs.name;
	return (*this);
}

Character::~Character(void){

	std::cout << "Destructor of Character called" << std::endl;
	return;
}
