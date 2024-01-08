/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:42:34 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/08 17:16:18 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{

	public:
		PhoneBook(void);
		void	appendContact(Contact contact, int i);
		void	printPhoneBook(void) const;
		void	askLineNumberToDisplay(void) const;
	private:
		Contact	_contact[9];
};

#endif
