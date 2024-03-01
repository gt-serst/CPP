/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:46:24 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:50:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{

	public:
		Cat(void);
		Cat(Cat const & src);
		Cat &	operator=(Cat const & rhs);
		~Cat(void);
		virtual void	makeSound() const;
	private:
		Brain*	_brain;
};

#endif
