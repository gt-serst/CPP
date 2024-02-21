/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:42:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:54:29 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal{

	public:
		WrongAnimal(void);
		WrongAnimal(std::string animal_type);
		WrongAnimal(WrongAnimal & src);
		WrongAnimal &	operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal(void);
		std::string const &	getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string	type;
};

#endif
