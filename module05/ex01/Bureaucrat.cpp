/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:20:35 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include "Form.hpp"

Bureaucrat::Bureaucrat(void){

	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){

	*this = src;
	return;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs){

	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
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

const char*	Bureaucrat::GradeTooHighException::what() const throw(){

	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){

	return ("Grade is too low");
}

void	Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signed " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << this->_name << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
