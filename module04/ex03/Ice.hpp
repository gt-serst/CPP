/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:21:26 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:55:22 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

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
