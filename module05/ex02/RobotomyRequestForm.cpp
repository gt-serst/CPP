/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:53:22 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 17:24:07 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void){

	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){

	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src){

	*this = src;
	return;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){

	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void){

	return;
}

void	RobotomyRequestForm::action(void) const{

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 2);

	int choice = dis(gen);
	std::cout << "Bzzzz bzzzz bzzzz" << std::endl;
	switch(choice)
	{
		case 1:
		{
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
			break;
		}
		default:
		{
			std::cout << "The robotomy has failed" << std::endl;
			break;
		}
	}
}
