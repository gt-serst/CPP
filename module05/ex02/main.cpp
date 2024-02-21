/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 17:32:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		//b.signForm(*f);
		b.Downgrade();
		b.executeForm(*f);
		std::cout << b << std::endl;
		std::cout << *f << std::endl;
		delete f;
		AForm* g = new RobotomyRequestForm("home");
		b.signForm(*g);
		b.executeForm(*g);
		std::cout << *g << std::endl;
		delete g;
		AForm* h = new ShrubberyCreationForm("home");
		b.signForm(*h);
		b.executeForm(*h);
		std::cout << *h << std::endl;
		delete h;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
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
