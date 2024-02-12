/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:17:51 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 17:20:33 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int const signing_grade, int const executing_grade) : _name(name), _is_signed(false), _signing_grade(signing_grade), _executing_grade(executing_grade){

	if (signing_grade < 1 || executing_grade < 1)
		throw GradeTooHighException();
	else if (signing_grade > 150 || executing_grade > 150)
		throw GradeTooLowException();
	return;
}

Form::~Form(void){

	return;
}

std::string	Form::getName(void) const{

	return this->_name;
}

bool	Form::getIsSigned(void) const{

	return this->_is_signed;
}

int	Form::getSigningGrade(void) const{

	return this->_signing_grade;
}

int	Form::getExecutingGrade(void) const{

	return this->_executing_grade;
}

void	Form::beSigned(Bureaucrat b){

	if (b.getGrade() <= this->_signing_grade)
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs){

	o << rhs.getName() << ", is form signed " << rhs.getIsSigned() << ", signing grade " << rhs.getSigningGrade() << ", executing grade " << rhs.getExecutingGrade();
	return o;
}
