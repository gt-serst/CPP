/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:42:34 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 16:00:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <limits>
# include <ios>
# include "Contact.hpp"

class PhoneBook{

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	appendContact(int i);
		void	printPhoneBook(void) const;
		void	printLine(std::string str) const;
		void	printPhoneBookLine(void) const;
	private:
		Contact	_contact[8];
};

#endif
