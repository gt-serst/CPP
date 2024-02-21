/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:16 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:53:34 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal{

	public:
		Animal(void);
		Animal(std::string animal_type);
		Animal(Animal & src);
		Animal &	operator=(Animal const & rhs);
		virtual ~Animal(void);
		std::string	const &	getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string	type;
};

#endif
