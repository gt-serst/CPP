/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 12:29:19 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << ">>>>> Working properly <<<<<" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << ">>>>> Deep copy operator <<<<<" << std::endl;
	Character*	bil = new Character("bil");
	Character*	john;
	bil->equip(tmp);
	john = bil;
	bil->use(0, *bob);
	john->use(0, *bob);
	
	std::cout << ">>>>> Create an empty type of materia <<<<<" << std::endl;
	tmp = src->createMateria("");
	bob->equip(tmp);
	bob->use(0, *me);

	std::cout << ">>>>> Learn many materias <<<<<" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << ">>>>> Unequip materias <<<<<" << std::endl;
	me->unequip(0);
	me->unequip(1);

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << ">>>>> Create materia that is unknow <<<<<" << std::endl;
	IMateriaSource* wrong_src = new MateriaSource();

	tmp = wrong_src->createMateria("ice");
	me->equip(tmp);
	tmp = wrong_src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete john;

	//system("leaks Interface");
	return 0;
}
