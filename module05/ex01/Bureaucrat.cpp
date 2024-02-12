/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 17:10:05 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat(void){

	return;
}

std::string	Bureaucrat::getName(void) const{

	return this->_name;
}

int	Bureaucrat::getGrade(void) const{

	return this->_grade;
}

void	Bureaucrat::Upgrade(void){

	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::Downgrade(void){

	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form f)
{
	if (f.getIsSigned() == true)
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << f.getName() << " because ";
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
