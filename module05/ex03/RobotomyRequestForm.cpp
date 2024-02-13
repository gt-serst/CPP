/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:53:22 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:41:20 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){

	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void){

	return;
}

void	RobotomyRequestForm::action(void) const{

	std::cout << "Bzzzz bzzz bzz" << std::endl << this->_target << " has been robotomized successfully 50\% of the time" << std::endl;
}
