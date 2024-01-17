/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:44:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 14:20:35 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::appendContact(int contact_number){

	std::string	buff;

	std::cout << "Insert your first name: ";
	do {
		if (!std::getline(std::cin, buff) || buff.empty())
			std::cin.clear();
	} while (buff.empty());
	this->_contact[contact_number].setFirstName(buff);
	std::cout << "Insert your last name: ";
	do {
		if (!std::getline(std::cin, buff) || buff.empty())
			std::cin.clear();
	} while (buff.empty());
	this->_contact[contact_number].setLastName(buff);
	std::cout << "Insert your nick name: ";
	do {
		if (!std::getline(std::cin, buff) || buff.empty())
			std::cin.clear();
	} while (buff.empty());
	this->_contact[contact_number].setNickName(buff);
	std::cout << "Insert your phone number: ";
	do {
		if (!std::getline(std::cin, buff) || buff.empty())
			std::cin.clear();
	} while (buff.empty());
	this->_contact[contact_number].setPhoneNumber(buff);
	std::cout << "Insert your darkest secret: ";
	do {
		if (!std::getline(std::cin, buff) || buff.empty())
			std::cin.clear();
	} while (buff.empty());
	this->_contact[contact_number].setDarkestSecret(buff);
}

void	PhoneBook::printPhoneBook(void) const{

	int	i;
	std::string str;

	i = 0;
	std::cout << "     Index|First name| Last name| Nick name" << std::endl;
	while (i < 8)
	{
		if (_contact[i].getFirstName().empty())
			break;
		std::cout << "         " << i << "|";
		str = _contact[i].getFirstName();
		printLine(str);
		std::cout << "|";
		str = _contact[i].getLastName();
		printLine(str);
		std::cout << "|";
		str = _contact[i].getNickName();
		printLine(str);
		std::cout << std::endl;
		i++;
	}
	printPhoneBookLine();
}

void	PhoneBook::printLine(std::string str) const{

	int	len;
	int	space;

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
}

void	PhoneBook::printPhoneBookLine(void) const{

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
	if (_contact[i].getFirstName().empty())
	{
		std::cout << "Contact does not exist" << std::endl;
		return;
	}
	std::cout << "First name: " << _contact[i].getFirstName() << std::endl;
	std::cout << "Last name: " << _contact[i].getLastName() << std::endl;
	std::cout << "Nick name: " << _contact[i].getNickName() << std::endl;
	std::cout << "Phone number: " << _contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contact[i].getDarkestSecret() << std::endl;
}
