/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:46:24 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/05 13:28:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat & src);
		Cat &	operator=(Cat const & rhs);
		~Cat(void);
		virtual void	makeSound() const;
};

#endif
