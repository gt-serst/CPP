/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:39:23 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 17:27:42 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource(void){

	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	std::cout << "Default constructor of MateriaSource called" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource & src){

	int	i;

	std::cout << "Copy constructor of MateriaSource called" << std::endl;
	i = 0;
	while (i < 4 && src._inventory[i] != NULL)
	{
		_inventory[i] = src._inventory[i]->clone();
		i++;
	}
	*this = src;
	return;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs){

	int	i;

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

MateriaSource::~MateriaSource(void){

	int	i;

	i = 0;
	while (i < 4 && _inventory[i] != NULL)
	{
		delete _inventory[i];
		i++;
	}
	std::cout << "Destructor of MateriaSource called" << std::endl;
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
			return;
		}
		i++;
	}
	ft_gc(m, false);
	//keep the address of materia if the inventory is full to delete it at the end
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
