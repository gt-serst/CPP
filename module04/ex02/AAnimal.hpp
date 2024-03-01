/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:37:07 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:51:47 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal{

	public:
		AAnimal(void);
		AAnimal(std::string animal_type);
		AAnimal(AAnimal const & src);
		AAnimal &	operator=(AAnimal const & rhs);
		virtual ~AAnimal(void);
		std::string	const &	getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	type;
};

#endif
