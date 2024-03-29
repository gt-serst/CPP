/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:49:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:19:03 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void){

	std::cout << "Default constructor of Brain called" << std::endl;
	return;
}

Brain::Brain(Brain const & src){

	std::cout << "Copy constructor of Brain called" << std::endl;
	*this = src;
	return;
}

Brain &	Brain::operator=(Brain const & rhs){

	if (this != &rhs)
	{
		int	i;

		i = 0;
		while (i < 100)
		{
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain(void){

	std::cout << "Destructor of Brain called" << std::endl;
	return;
}


