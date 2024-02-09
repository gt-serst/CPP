/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:19:07 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 09:04:19 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog & src);
		Dog &	operator=(Dog const & rhs);
		~Dog(void);
		virtual void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif
