/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:44:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/05 18:15:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

void	PhoneBook::appendContact(Contact contact) const{

	std::string	buff;

	std::cout << "Insert your first name: ";
	std::cin >> buff;
	contact.setFirstName(buff);
	std::cout << contact.getFirstName() << std::endl;
}
