/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/11 15:04:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;
	int	num_zombies = 5;
	Zombie*	zombieHordePtr = zombieHorde(num_zombies, "Bilbon");
	
	i = 0;
	while (i < num_zombies)
		zombieHordePtr[i++].announce();
	delete [] zombieHordePtr;
	return (0);
}
