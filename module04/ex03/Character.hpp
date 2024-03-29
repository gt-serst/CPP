/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:48:58 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:56:19 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter{

	public:
		Character(void);
		Character(std::string character_name);
		Character(Character const & src);
		Character &	operator=(Character const & rhs);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria*	_inventory[4];
};

struct Node
{
	AMateria*	value;
	struct Node	*next;
};

void	*ft_gc(AMateria* m, bool clean);

#endif
