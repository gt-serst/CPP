/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:01:37 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/11 14:50:52 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

	std::cout << "Default constrcutor called" << std::endl;
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
