/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 11:24:06 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << ">>>>> Construction <<<<<" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << std::endl;
	std::cout << ">>>>> Destruction <<<<<" << std::endl;
	delete j;
	delete i;

	return 0;
}
