/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:15:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 14:31:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){

	return;
}

Intern::Intern(Intern & src){

	*this = src;
	return;
}

Intern &	Intern::operator=(Intern const & rhs){

	return (*this);
}

Intern::~Intern(void){

	return;
}

AForm*	Intern::makeForm(std::string form_name, std::string form_target) const{

	switch (form_name)
	{
		case "ShrubberyCreationForm":
			std::cout << "Intern creates " << form_name << std::endl;
			return (new ShrubberyCreationForm(form_target));
		case "RobotomyRequestForm":
			std::cout << "Intern creates " << form_name << std::endl;
			return (new RobotomyRequestForm(form_target));
		case "PresidentialPardonForm":
			std::cout << "Intern creates " << form_name << std::endl;
			return (new PresidentialPardonForm(form_target));
		default:
			std::cout << "Form name doesn't exist" << std::endl;
			return (NULL);
	}
}
