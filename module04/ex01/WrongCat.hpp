/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/05 13:28:50 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat & src);
		WrongCat &	operator=(WrongCat const & rhs);
		~WrongCat(void);
		void	makeSound(void) const;
};

#endif
