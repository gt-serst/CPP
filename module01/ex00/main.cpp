/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:50:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/10 15:38:08 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie*	bob = newZombie("John");
	randomChump("Arthur");
	delete bob;
	(void)argc;
	(void)argv;
	return (0);
}
