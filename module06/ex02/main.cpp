/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:07:13 by geraudtsers       #+#    #+#             */
/*   Updated: 2024/02/23 12:15:12 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>

Base*	generate(void)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 3);

	int choice = dis(gen);

	switch (choice)
	{
		case 1:
		{
			A* obj;
			obj = new A;
			return (obj);
		}
		case 2:
		{
			B* obj;
			obj = new B;
			return (obj);
		}
		case 3:
		{
			C* obj;
			obj = new C;
			return (obj);
		}
		default:
			std::cout << "Invalid choice" << std::endl;
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is a class A object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is a class B object" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is a class C object" << std::endl;
	else
		std::cout << "This is an invalid type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)(dynamic_cast<A &>(p));
		std::cout << "This is a class A object" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)(dynamic_cast<B &>(p));
			std::cout << "This is a class B object" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)(dynamic_cast<C &>(p));
				std::cout << "This is a class C object" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "This is an invalid type" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(NULL);
	identify(base);
	identify(*base);
	delete (base);
	return (0);
}
