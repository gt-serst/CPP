/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:44:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/22 16:16:48 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void){

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src){

	*this = src;
	return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){

	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){

	return;
}

void	ShrubberyCreationForm::action(void) const{

	std::ofstream ofs(this->_target + "_shrubbery");
	if (ofs.is_open())
	{
		ofs << "root 1" << std::endl << "├── 1" << std::endl << "├── 2" << std::endl << "│   ├── 2.1" << std::endl << "│   └── 2.2" << std::endl << "└── 3" << std::endl << "    └── 3.1" << std::endl << "root2" << std::endl << "└── X" << std::endl;
		ofs.close();
	}
	else
	{
		std::cout << "error: failed to create the file" << std::endl;
	}
}
