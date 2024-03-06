/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:07:34 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/06 13:05:40 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::list<int>	lst;

	lst.push_back(19);
	lst.push_back(20);
	lst.push_back(50);
	lst.push_back(80);
	lst.push_back(70);

	try
	{
		easyfind< std::list<int> >(lst, 19);
		easyfind< std::list<int> >(lst, 42);
	}
	catch(ElementNotFound& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
