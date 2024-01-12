/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:56:59 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 11:36:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB{

	public:
		HumanB(std::string humanName);
		~HumanB(void);
		void	setWeapon(Weapon& weapon);
		void	attack(void);
	private:
		Weapon* 	_weapon;
		std::string	_name;
};

#endif
