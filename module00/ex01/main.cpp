/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:11:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/05 18:15:57 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string str("");

	(void)argc;
	(void)argv;
	std::cin >> str;
	if (str.compare("ADD") == 0)
	{
		Contact	contact;
		phonebook.appendContact(contact);
	}
	return (0);
}
