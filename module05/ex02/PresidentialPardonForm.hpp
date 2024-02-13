/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:54:31 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 14:03:31 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm{

	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm & src);
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm(void);
		virtual void	action(void) const;

	private:
		const std::string _target;
};

#endif
