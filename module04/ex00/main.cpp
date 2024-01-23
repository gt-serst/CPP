/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 11:51:22 by gt-serst         ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const Animal* l = new Animal("Animal");
	const Animal* m = new Dog("Chien");
	const Animal* n = new Cat("Chat");

	std::cout << j->getType();
	std::cout << i->getType();

	std::cout << l->getType() << std::endl;
	std::cout << m->getType() << std::endl;
	std::cout << n->getType() << std::endl;
	
	i->makeSound();
	j->makeSound();

	meta->makeSound();

	k->makeSound();

	delete n, delete m, delete l, delete k, delete i, delete j, delete meta;
	
	return 0;
}
