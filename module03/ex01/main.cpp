/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 13:34:00 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	instance1("Frodon");
	ScavTrap	instance2("Sam");

	instance1.attack("Sam");
	instance2.takeDamage(20);
	instance2.attack("Frodon");
	instance1.takeDamage(20);

	instance1.beRepaired(20);
	instance2.beRepaired(20);

	instance1.guardGate();
	instance2.guardGate();

	return (0);
}
