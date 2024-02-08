/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:36:58 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/08 15:01:12 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource & src);
		MateriaSource &	operator=(MateriaSource const & rhs);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria*	_inventory[4];
};

#endif
