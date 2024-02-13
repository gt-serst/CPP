/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:54:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 14:31:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern{

	public:
		Intern(void);
		Intern(Intern & src);
		Intern &	operator=(Intern const & rhs);
		~Intern(void);
		AForm*	makeForm(std::string form_name, std::string form_target);
};

#endif
