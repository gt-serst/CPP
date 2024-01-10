/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:51:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/10 15:33:33 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

	public:
		Zombie(std::string const zombie_name);
		~Zombie(void);
		void	announce(void) const;
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
