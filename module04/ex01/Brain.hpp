/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:46:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:54:18 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain{

	public:
		Brain(void);
		Brain(Brain & src);
		Brain &	operator=(Brain const & rhs);
		~Brain(void);
	private:
		std::string	_ideas[100];

};

#endif
