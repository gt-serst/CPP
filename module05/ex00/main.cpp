/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 11:30:06 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) 
{

	try
	{
        Bureaucrat highGradeBureaucrat("HighGradeBureaucrat", 0);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	try
    {
	 	Bureaucrat lowGradeBureaucrat("LowGradeBureaucrat", 160);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
        Bureaucrat validGradeBureaucrat("ValidGradeBureaucrat", 75);
		std::cout << validGradeBureaucrat << std::endl;
    }
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
        Bureaucrat upgradeBureaucrat("UpgradeBureaucrat", 1);
		std::cout << upgradeBureaucrat << std::endl;
		upgradeBureaucrat.Upgrade();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
        Bureaucrat downgradeBureaucrat("DowngradeBureaucrat", 150);
    	std::cout << downgradeBureaucrat << std::endl;   
		downgradeBureaucrat.Downgrade();
    }
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
