/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:07:29 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/07 16:34:10 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"
//class ICharacter;

class AMateria{

	public:
		AMateria(void);
		AMateria(std::string const & materia_type);
		AMateria(AMateria & src);
		AMateria &	operator=(AMateria const & rhs);
		virtual ~AMateria(void);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string	type;
};

#endif
