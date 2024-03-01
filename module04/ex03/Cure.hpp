/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:44:37 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:56:30 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria{

	public:
		Cure(void);
		Cure(Cure const const & src);
		Cure &	operator=(Cure const & rhs);
		~Cure(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
