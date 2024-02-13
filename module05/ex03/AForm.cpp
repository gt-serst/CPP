/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:36:59 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:41:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, int const signing_grade, int const executing_grade) : _name(name), _is_signed(false), _signing_grade(signing_grade), _executing_grade(executing_grade){

	if (signing_grade < 1 || executing_grade < 1)
		throw GradeTooHighException();
	else if (signing_grade > 150 || executing_grade > 150)
		throw GradeTooLowException();
	return;
}

AForm::~AForm(void){

	return;
}

std::string	AForm::getName(void) const{

	return this->_name;
}

bool	AForm::getIsSigned(void) const{

	return this->_is_signed;
}

int	AForm::getSigningGrade(void) const{

	return this->_signing_grade;
}

int	AForm::getExecutingGrade(void) const{

	return this->_executing_grade;
}

void	AForm::beSigned(Bureaucrat const & b){

	if (b.getGrade() <= this->_signing_grade)
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const{

	if (this->_is_signed == false)
	{
		throw FormNotSignedYet();	
	}
	else if (executor.getGrade() > this->_executing_grade)
	{	
		throw GradeTooLowException();
	}
	else
	{
		std::cout << "Congratulation, the form's action is running" << std::endl;
		this->action();
	}
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs){

	o << rhs.getName() << ", is form signed " << rhs.getIsSigned() << ", signing grade " << rhs.getSigningGrade() << ", executing grade " << rhs.getExecutingGrade();
	return o;
}
