/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:48:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 12:51:35 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat &	operator=(WrongCat const & rhs);
		~WrongCat(void);
		void	makeSound(void) const;
};

#endif
