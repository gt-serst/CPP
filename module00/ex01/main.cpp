/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:11:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/08 17:26:37 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string str;
	int			i;

	(void)argc;
	(void)argv;
	i = 0;
	while (1)
	{
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			Contact	contact;
			phonebook.appendContact(contact, i);
			i++;
		}
		if (str.compare("SEARCH") == 0)
			phonebook.printPhoneBook();
		if (str.compare("EXIT") == 0)
			exit(0);
	}
	return (0);
}
