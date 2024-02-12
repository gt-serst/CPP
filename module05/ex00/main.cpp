/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:55:47 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 14:45:48 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

int main() {

	try
	{
        Bureaucrat highGradeBureaucrat("HighGradeBureaucrat", 0);
    }
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
    }
    try 
	{
        Bureaucrat lowGradeBureaucrat("LowGradeBureaucrat", 160);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
    }	
    try
	{
        Bureaucrat validGradeBureaucrat("ValidGradeBureaucrat", 75);
        std::cout << "Successfully created bureaucrat with grade: " << validGradeBureaucrat.getGrade() << std::endl;
    }
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
        Bureaucrat upgradeBureaucrat("UpgradeBureaucrat", 1);
        try
		{
			upgradeBureaucrat.Upgrade();
    	}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
    }
	try
	{
        Bureaucrat downgradeBureaucrat("DowngradeBureaucrat", 150);
        try
		{
			downgradeBureaucrat.Downgrade();
    	}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
    }
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
    }
    return 0;
}
