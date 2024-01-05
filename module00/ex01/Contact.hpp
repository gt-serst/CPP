/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:49:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/05 18:13:11 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{

	public:
		Contact(void);
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickName(std::string str);
		void		setPhoneNumber(int i);
		void		setDarkestSecret(std::string str);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		int			getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		int			_phone_number;
		std::string	_darkest_secret;
};

#endif
