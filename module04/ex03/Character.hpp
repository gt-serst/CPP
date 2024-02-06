/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:48:58 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/06 18:01:16 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include <AMateria.hpp>

class Character{

	public:
		Character(void);
		Character(std::string character_name);
		Character(Character & src);
		Character &	operator=(Character const & rhs);
		virtual ~Character() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
	private:
		std::string	_name;
		AMateria*	_inventory[4];
};

#endif
