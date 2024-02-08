/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:39:23 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 23:26:43 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource(void){

	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	std::cout << "Default constructor of MateriaSource called" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource & src){

	int	i;

	std::cout << "Copy constructor of MateriaSource called" << std::endl;
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

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs){

	int	i;

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

MateriaSource::~MateriaSource(void){

	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		i++;
	}
	std::cout << "Destructor of MateriaSource called" << std::endl;
	return;
}

void	MateriaSource::learnMateria(AMateria* m){

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

AMateria* MateriaSource::createMateria(std::string const & type){

	int	i;

	i = 0;
	while (i < 4 && this->_inventory[i])
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
		i++;
	}
	return (0);
}
