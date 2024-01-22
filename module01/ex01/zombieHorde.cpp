/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:20:08 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/22 10:17:09 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie*	zombieHordePtr = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombieHordePtr[i].setName(name);
		i++;
	}
	return (zombieHordePtr);
}
