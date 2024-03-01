/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:15:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:23:33 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void){

	return;
}

Intern::Intern(Intern const & src){

	*this = src;
	return;
}

Intern &	Intern::operator=(Intern const & rhs){

	if (this != &rhs)
	{

	}
	return (*this);
}

Intern::~Intern(void){

	return;
}

AForm*	Intern::makeForm(std::string form_name, std::string form_target) const{

	int	i;
	std::string	forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	i = 0;
	while (i < 3 && form_name != forms[i])
		i++;
	switch (i)
	{
		case 0:
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (new ShrubberyCreationForm(form_target));
		}
		case 1:
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (new RobotomyRequestForm(form_target));
		}
		case 2:
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (new PresidentialPardonForm(form_target));
		}
		default:
			throw AForm::FormNameUnknown();
	}
}
