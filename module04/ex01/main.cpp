/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/06 15:24:08 by gt-serst         ###   ########.fr       */
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
	std::cout << ">>>>> Dynamically allocate Dog objects <<<<<" << std::endl;
	while(i++ < num_dogs - 1)
		animals_array[i] = new Dog();
	std::cout << ">>>>> Dynamically allocate Cat objects <<<<<" << std::endl;
	while(i < num_animals)
	{
		animals_array[i] = new Cat();
		i++;
	}
	i = -1;
	while (i++ < num_animals - 1)
		delete animals_array[i];
	return 0;
}
