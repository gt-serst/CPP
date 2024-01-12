/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:34:46 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/11 18:25:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon{

	public:
		Weapon(std::string weaponType);
		~Weapon();
		std::string const &	getType();
		void				setType(std::string newType);
	private:
		std::string			_type;
};

#endif
