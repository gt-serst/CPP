/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geraudtserstevens <geraudtserstevens@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:21:26 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 23:38:36 by geraudtsers      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{

	public:
		Ice(void);
		Ice(Ice const & src);
		Ice &	operator=(Ice const & rhs);
		~Ice(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
