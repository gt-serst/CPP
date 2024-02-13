/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 15:48:18 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern	someRandomIntern;
		AForm*	rrf;
		Bureaucrat b("bob", 1);
		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "home");
		b.signForm(*rrf);
		b.executeForm(*rrf);
		std::cout << b << std::endl;
		std::cout << *rrf << std::endl;
		delete rrf;
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
	catch (AForm::FormNameUnknown& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
