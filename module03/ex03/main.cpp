/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 14:15:09 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	instance1("Frodon");
	ScavTrap	instance2("Sam");
	FragTrap	instance3("Bilbon");
	FragTrap	instance4("Gandalf");
	DiamondTrap	instance5("Merry");
	DiamondTrap	instance6("Pipin");

	instance1.attack("Sam");
	instance2.takeDamage(20);
	instance2.attack("Frodon");
	instance1.takeDamage(20);

	instance1.beRepaired(20);
	instance2.beRepaired(20);

	instance1.guardGate();
	instance2.guardGate();

	instance3.attack("Gandalf");
	instance4.takeDamage(30);
	instance4.attack("Bilbon");
	instance3.takeDamage(30);

	instance3.beRepaired(30);
	instance4.beRepaired(30);

	instance3.highFivesGuys();
	instance4.highFivesGuys();

	instance5.attack("Pipin");
	instance6.takeDamage(30);

	return (0);
}
