/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 14:54:26 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	frodon("Frodon");
	ScavTrap	sam("Sam");
	FragTrap	bilbon("Bilbon");
	FragTrap	gandalf("Gandalf");

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

	bilbon.attack("Gandalf");
	gandalf.takeDamage(30);
	gandalf.attack("Bilbon");
	bilbon.takeDamage(30);

	bilbon.beRepaired(30);
	gandalf.beRepaired(30);

	bilbon.highFivesGuys();
	gandalf.highFivesGuys();

	return (0);
}
