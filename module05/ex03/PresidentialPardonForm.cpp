/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:55:39 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:23:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void){

	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){

	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void){

	return;
}

const char*	PresidentialPardonForm::GradeTooHighException::what() const throw(){

	return ("Grade is too high");
}

const char*	PresidentialPardonForm::GradeTooLowException::what() const throw(){

	return ("Grade is too low");
}

void	PresidentialPardonForm::action(void) const{

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
