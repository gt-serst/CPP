/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:44:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 14:25:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){

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
	{
		std::cout << "Cannot upgrade, highest grade already reached" << std::endl;
		return;
	}
	this->_grade--;
}

void	Bureaucrat::Downgrade(void){

	if (this->_grade == 150)
	{
		std::cout << "Cannot downgrade, lowest grade already reached" << std::endl;
		return;
	}
	this->_grade++;
}

