/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:05 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	frodon("Frodon");
	ScavTrap	sam("Sam");

	frodon.attack("Sam");
	sam.takeDamage(20);
	sam.attack("Frodon");
	frodon.takeDamage(20);
	frodon.takeDamage(20);
	frodon.takeDamage(20);
	frodon.takeDamage(20);
	frodon.takeDamage(20);

	frodon.beRepaired(20);
	sam.beRepaired(20);

	frodon.guardGate();
	sam.guardGate();

	return (0);
}
