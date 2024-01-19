/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:12:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/19 16:35:16 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap & src);
		~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
