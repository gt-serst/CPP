/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:56:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 13:04:04 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	instance1("Frodon");
	ClapTrap	instance2("Sam");

	instance1.attack("Sam");
	instance2.takeDamage(0);
	instance2.attack("Frodon");
	instance1.takeDamage(0);
	instance1.beRepaired(10);
	instance2.beRepaired(10);

	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");
	instance1.attack("Sam");

	instance1.attack("Sam");

	return (0);
}
