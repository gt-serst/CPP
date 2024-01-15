/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:33:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/15 12:04:46 by gt-serst         ###   ########.fr       */
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

void	Harl::complain(std::string level) const{

	if (level == "DEBUG")
		Harl::debug();	
	if (level == "INFO")
		Harl::info();
	if (level == "WARNING")
		Harl::warning();
	if (level == "ERROR")
		Harl::error();
}

void	Harl::debug(void) const{

	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) const{

	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) const{

	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const{

	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

