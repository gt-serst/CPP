/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:11:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 14:25:11 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	str;
	int			contact_number;

	contact_number = 0;
	while (1)
	{
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			phonebook.appendContact(contact_number);
			contact_number++;
			if (contact_number == 8)
				contact_number = 0;
		}
		if (str.compare("SEARCH") == 0)
			phonebook.printPhoneBook();
		if (str.compare("EXIT") == 0)
			break;
	}
	return (0);
}
