/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:41:26 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include "AForm.hpp"

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

void	Bureaucrat::signForm(AForm & f) const{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signed " << f.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << this->_name << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
	}	
}

void	Bureaucrat::executeForm(AForm const & form) const{

	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << "Couldn't execute the form because " << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
