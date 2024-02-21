/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:54:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:56:41 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern{

	public:
		Intern(void);
		Intern(Intern & src);
		Intern &	operator=(Intern const & rhs);
		~Intern(void);
		AForm*	makeForm(std::string form_name, std::string form_target) const;
};

#endif
