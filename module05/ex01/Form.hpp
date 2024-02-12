/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:12:55 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 17:20:47 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	public:
		Form(const std::string name, int const signing_grade, int const executing_grade);
		~Form(void);
		std::string	getName(void) const;
		bool	getIsSigned(void) const;
		int	getSigningGrade(void) const;
		int	getExecutingGrade(void) const;
		void	beSigned(Bureaucrat b);
		
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

	private:
		const std::string _name;
		bool	_is_signed;
		int const	_signing_grade;
		int const	_executing_grade;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
