/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:54:31 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:10:50 by gt-serst         ###   ########.fr       */
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
		virtual ~PresidentialPardonForm(void);	

		class GradeTooHighException : public std::exception {
    		public:
        		virtual const char* what() const throw() {
            		return "Grade is too high";
        		}
    	};
    	class GradeTooLowException : public std::exception {
    		public:
        		virtual const char* what() const throw() {
            		return "Grade is too low";
        		}
    	};

		virtual void	action(void) const;

	private:
		const std::string _target;
};

#endif
