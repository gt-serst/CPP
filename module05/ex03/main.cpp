/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:41:24 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("bob", 1);
		AForm* f = new PresidentialPardonForm("home");
		b.signForm(*f);
		b.Downgrade();
		b.executeForm(*f);
		std::cout << b << std::endl;
		std::cout << *f << std::endl;
		delete f;
	}
	catch (AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::FormNotSignedYet& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
