/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:33:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/22 10:22:38 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

Harl::~Harl(void){

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Harl::complain(std::string level){

	int			i;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && level.compare(levels[i]) != 0)
		i++;
	switch (i)
	{
		case (0):
			this->debug();
		case (1):
			this->info();
		case (2):
			this->warning();
		case (3):
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void){

	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void){

	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void){

	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){

	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

