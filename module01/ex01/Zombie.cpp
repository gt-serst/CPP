/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:01:37 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/15 11:33:54 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){

	std::cout << "Default constructor called" << std::endl;
	return;
}

Zombie::Zombie(std::string const zombie_name) : _name(zombie_name){

	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void){

	std::cout << "Destructor called (" << _name << ")" << std::endl;
	return;
}

void	Zombie::announce(void) const{

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
