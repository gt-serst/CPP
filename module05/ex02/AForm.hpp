/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:38:05 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/13 14:07:40 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

	public:
		AForm(void);
		AForm(const std::string name, int const signing_grade, int const executing_grade);
		virtual ~AForm(void);
		std::string	getName(void) const;
		bool	getIsSigned(void) const;
		int	getSigningGrade(void) const;
		int	getExecutingGrade(void) const;
		void	beSigned(Bureaucrat const & b);
		
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

		virtual void	action(void) const = 0;
		void	execute(Bureaucrat const & executor) const;

    	class FormNotSignedYet : public std::exception {
    		public:
        		virtual const char* what() const throw() {
            		return "Form is not signed yet";
        		}
    	};

	private:
		const std::string _name;
		bool	_is_signed;
		int const	_signing_grade;
		int const	_executing_grade;
};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
