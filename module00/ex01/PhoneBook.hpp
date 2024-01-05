/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:42:34 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/05 18:10:44 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook{

	public:
		PhoneBook(void);
		void	appendContact(Contact contact) const;
	private:
		Contact contact;
};

#endif
