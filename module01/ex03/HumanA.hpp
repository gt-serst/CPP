/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 11:15:09 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA{

	public:
		HumanA(std::string humanName, Weapon& weaponREF);
		~HumanA(void);
		void	attack(void);
	private:
		std::string _name;
		Weapon& 	_weapon;
};

#endif
