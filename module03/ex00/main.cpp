/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 14:49:48 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	frodon("Frodon");
	ClapTrap	sam("Sam");

	frodon.attack("Sam");
	sam.takeDamage(0);
	sam.attack("Frodon");
	frodon.takeDamage(0);

	frodon.beRepaired(10);
	sam.beRepaired(10);

	return (0);
}
