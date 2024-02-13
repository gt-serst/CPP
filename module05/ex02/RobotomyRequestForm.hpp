/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:51:43 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 14:03:30 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm{

	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm & src);
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm(void);
		virtual void	action(void) const;

	private:
		const std::string _target;
};

#endif
