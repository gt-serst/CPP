/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:51:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/11 15:04:08 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

	public:
		Zombie();
		Zombie(std::string const zombie_name);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void) const;
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
