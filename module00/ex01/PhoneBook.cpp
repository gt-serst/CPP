/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:44:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/08 17:15:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

void	PhoneBook::appendContact(Contact contact, int i){

	std::string	buff;

	if (i == 8)
		this->_contact[0] = contact;
	else
		this->_contact[i] = contact;
	std::cout << "Insert your first name: ";
	std::cin >> buff;
	this->_contact[i].setFirstName(buff);
	std::cout << "Insert your last name: ";
	std::cin >> buff;
	this->_contact[i].setLastName(buff);
	std::cout << "Insert your nick name: ";
	std::cin >> buff;
	this->_contact[i].setNickName(buff);
	std::cout << "Insert your phone number: ";
	std::cin >> buff;
	this->_contact[i].setPhoneNumber(buff);
	std::cout << "Insert your darkest secret ";
	std::cin >> buff;
	this->_contact[i].setDarkestSecret(buff);
}

void	PhoneBook::printPhoneBook(void) const
{
	int	i;
	int	len;
	int	space;
	std::string str;

	i = 0;
	std::cout << "     Index|First name| Last name| Nick name" << std::endl;
	while (i < 7)
	{
		std::cout << "         " << i << "|";
		str = _contact[i].getFirstName();
		len = str.length();
		if (len <= 10)
		{
			space = 10 - len;
			while (space != 0)
			{
				std::cout << " ";
				space--;
			}
			std::cout << str;
		}
		else
			std::cout << str.substr(0, 9) << ".";
		std::cout << "|";
		str = _contact[i].getLastName();
		len = str.length();
		if (len <= 10)
		{
			space = 10 - len;
			while (space != 0)
			{
				std::cout << " ";
				space--;
			}
			std::cout << str;
		}
		else
			std::cout << str.substr(0, 9) << ".";
		std::cout << "|";
		str = _contact[i].getNickName();
		len = str.length();
		if (len <= 10)
		{
			space = 10 - len;
			while (space != 0)
			{
				std::cout << " ";
				space--;
			}
			std::cout << str << std::endl;
		}
		else
			std::cout << str.substr(0, 9) << "." << std::endl;
		i++;
	}
	askLineNumberToDisplay();
}

void	PhoneBook::askLineNumberToDisplay(void) const
{
	int		i;

	std::cout << "Insert the index of the user you want to see more information: ";
	while (!(std::cin >> i))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number: ";
    }
	if (i < 0 || i > 7)
	{
		std::cout << "Invalid input. You inserted a number outside of the array" << std::endl;
		return ;
	}
	std::cout << "First name: " << _contact[i].getFirstName() << std::endl;
	std::cout << "Last name: " << _contact[i].getLastName() << std::endl;
	std::cout << "Nick name: " << _contact[i].getNickName() << std::endl;
	std::cout << "Phone number: " << _contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contact[i].getDarkestSecret() << std::endl;
}
