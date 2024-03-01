/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:19:07 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:54:26 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{

	public:
		Dog(void);
		Dog(Dog const & src);
		Dog &	operator=(Dog const & rhs);
		~Dog(void);
		virtual void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif
