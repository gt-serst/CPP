/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:40:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 13:32:29 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat{

	public:	
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	Upgrade(void);
		void	Downgrade(void);

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

		void	signForm(AForm & f) const;

		void	executeForm(AForm const & form) const;

	private:
		std::string const	_name;
		int	_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
