/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:54:19 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 13:58:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap & src);
		FragTrap &	operator=(FragTrap & const rhs);
		~FragTrap(void);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
