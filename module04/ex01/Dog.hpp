/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:19:07 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/05 16:41:19 by gt-serst         ###   ########.fr       */
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
		Brain * _brain;
};

#endif