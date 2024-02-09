/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 11:12:09 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << ">>>>> Construction <<<<<" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const Animal* l = new Animal("Dog");

	std::cout << std::endl;
	std::cout << ">>>>> With virtual <<<<<" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << l->getType() << std::endl;

	i->makeSound();
	j->makeSound();

	meta->makeSound();

	std::cout << std::endl;
	std::cout << ">>>>> Without virtual <<<<<" << std::endl;
	k->makeSound();

	std::cout << std::endl;
	std::cout << ">>>>> Destruction <<<<<" << std::endl;
	delete l, delete k, delete i, delete j, delete meta;

	return 0;
}
