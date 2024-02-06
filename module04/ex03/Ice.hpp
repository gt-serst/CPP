/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:21:26 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/06 15:41:52 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria{

	public:
		Ice(void);
		Ice(Ice & src);
		Ice &	operator=(Ice const & rhs);
		~Ice(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
