/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:46:24 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 09:07:43 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{

	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat & src);
		Cat &	operator=(Cat const & rhs);
		~Cat(void);
		virtual void	makeSound() const;
	private:
		Brain*	_brain;
};

#endif
