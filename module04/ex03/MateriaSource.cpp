/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:39:23 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 12:30:27 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void){

	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	//std::cout << "Default constructor of MateriaSource called" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource & src){

	int	i;

	//std::cout << "Copy constructor of MateriaSource called" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (src._inventory[i]->getType() == "ice")
			_inventory[i] = new Ice();
		else
			_inventory[i] = new Cure();
		i++;
	}
	*this = src;
	return;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs){

	int	i;

	delete _inventory[0];
	delete _inventory[1];
	delete _inventory[2];
	delete _inventory[3];
	i = 0;
	while (i < 4)
	{
		if (rhs._inventory[i]->getType() == "ice")
			_inventory[i] = new Ice();
		else
			_inventory[i] = new Cure();
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void){

	delete _inventory[0];
	delete _inventory[1];
	delete _inventory[2];
	delete _inventory[3];
	//std::cout << "Destructor of MateriaSource called" << std::endl;
	return;
}

void	MateriaSource::learnMateria(AMateria* m){

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

AMateria* MateriaSource::createMateria(std::string const & type){

	int	i;

	i = 0;
	while (i < 4 && _inventory[i])
	{
		if (_inventory[i]->getType() == type)
			return (_inventory[i]->clone());
		i++;
	}
	return (0);
}
