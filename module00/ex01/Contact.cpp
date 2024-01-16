/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:59:20 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/15 15:58:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::setFirstName(std::string str){

	this->_first_name = str;
	return;
}

void	Contact::setLastName(std::string str){

	this->_last_name = str;
	return;
}

void	Contact::setNickName(std::string str){

	this->_nick_name = str;
	return;
}

void	Contact::setPhoneNumber(std::string str){

	this->_phone_number = str;
	return;
}

void	Contact::setDarkestSecret(std::string str){

	this->_darkest_secret = str;
	return;
}

std::string	Contact::getFirstName(void) const{

	return this->_first_name;
}

std::string	Contact::getLastName(void) const{

	return this->_last_name;
}

std::string	Contact::getNickName(void) const{

	return this->_nick_name;
}

std::string	Contact::getPhoneNumber(void) const{

	return this->_phone_number;
}

std::string	Contact::getDarkestSecret(void) const{

	return this->_darkest_secret;
}
