/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:41:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:13:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP 

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm{

	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm(void);

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
		std::string _target;
};

#endif
