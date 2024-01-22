/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/22 10:17:43 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA{

	public:
		HumanA(std::string name, Weapon& weaponREF);
		~HumanA(void);
		void	attack(void);
	private:
		std::string	_name;
		Weapon& 	_weapon;
};

#endif
