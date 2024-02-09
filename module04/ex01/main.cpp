/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 11:19:12 by gt-serst         ###   ########.fr       */
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
	int		i;
	int		num_animals = 100;
	int		num_dogs = num_animals / 2;
	Animal*	animals_array[num_animals];

	i = -1;
	std::cout << ">>>>> Construction <<<<<" << std::endl;
	std::cout << std::endl;
	std::cout << ">>>>> Dynamically allocate Dog objects <<<<<" << std::endl;
	while(i++ < num_dogs - 1)
		animals_array[i] = new Dog();
	std::cout << std::endl;
	std::cout << ">>>>> Dynamically allocate Cat objects <<<<<" << std::endl;
	while(i < num_animals)
	{
		animals_array[i] = new Cat();
		i++;
	}
	std::cout << std::endl;
	std::cout << ">>>>> Destruction <<<<<" << std::endl;
	i = -1;
	while (i++ < num_animals - 1)
		delete animals_array[i];
	return 0;
}
