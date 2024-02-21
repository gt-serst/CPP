/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:40:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:09:28 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat & src);
		Bureaucrat &	operator=(Bureaucrat const & rhs);
		~Bureaucrat(void);
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	Upgrade(void);
		void	Downgrade(void);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		void	signForm(Form& f);

	private:
		std::string const	_name;
		int	_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
