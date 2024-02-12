/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 14:45:50 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){

	if (grade < 1 || grade > 150)
		throw std::invalid_argument("Wrong grade value, highest grade is 1 and lowest grade is 150");
	this->_grade = grade;
	std::cout << "Constructor of Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void){

	std::cout << "Destructor of Bureaucrat called" << std::endl;
	return;
}

std::string	Bureaucrat::getName(void){

	return this->_name;
}

int	Bureaucrat::getGrade(void){

	return this->_grade;
}

void	Bureaucrat::Upgrade(void){

	if (this->_grade == 1)
		throw std::range_error("Wrong grade value, highest grade is 1");
	this->_grade--;
}

void	Bureaucrat::Downgrade(void){

	if (this->_grade == 150)
		throw std::range_error("Wrong grade value, lowest grade is 150");
	this->_grade++;
}

