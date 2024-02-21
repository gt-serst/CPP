/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:53:22 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:24:56 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

const char*	RobotomyRequestForm::GradeTooHighException::what() const throw(){

	return ("Grade is too high");
}

const char*	RobotomyRequestForm::GradeTooLowException::what() const throw(){

	return ("Grade is too low");
}

void	RobotomyRequestForm::action(void) const{

	std::cout << "Bzzzz bzzz bzz" << std::endl << this->_target << " has been robotomized successfully 50\% of the time" << std::endl;
}
