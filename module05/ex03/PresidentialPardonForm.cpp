/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:55:39 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:11:19 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){

	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void){

	return;
}

void	PresidentialPardonForm::action(void) const{

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
