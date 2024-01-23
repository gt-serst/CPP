/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:22:04 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 14:41:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap & src);
		ClapTrap &	operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif
