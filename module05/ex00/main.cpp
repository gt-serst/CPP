/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 14:25:09 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    
	std::cout << "Too high grade" << std::endl;
	try
	{
        Bureaucrat highGradeBureaucrat("HighGradeBureaucrat", 0);
    } 
	catch (Bureaucrat::GradeTooHighException &e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } 
	catch (Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << "Too low grade" << std::endl;
    try 
	{
        Bureaucrat lowGradeBureaucrat("LowGradeBureaucrat", 160);
    } 
	catch (Bureaucrat::GradeTooHighException &e) 
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } 
	catch (Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << "Valid grade" << std::endl;
    try
	{
        Bureaucrat validGradeBureaucrat("ValidGradeBureaucrat", 75);
        std::cout << "Successfully created bureaucrat with grade: " << validGradeBureaucrat.getGrade() << std::endl;
    }
	catch (Bureaucrat::GradeTooHighException &e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
	catch (Bureaucrat::GradeTooLowException &e)
	{
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
