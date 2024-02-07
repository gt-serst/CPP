/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:44:37 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/07 15:05:15 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{

	public:
		Cure(void);
		Cure(Cure & src);
		Cure &	operator=(Cure const & rhs);
		~Cure(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
