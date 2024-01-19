/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:22:04 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/19 16:15:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string name, int hit_points, int energy_points, int attack_damage);
		ClapTrap(ClapTrap & src);
		ClapTrap &	operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		int	_hit_points;
		int	_energy_points;
		int	_attack_damage;
};

#endif
