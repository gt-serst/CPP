/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:18:24 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	try
	{
		Bureaucrat b("bob", 40);
		Form	f("form", 70, 50);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("bob", 80);
		Form	f("form", 70, 50);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
