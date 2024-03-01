/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:12:55 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:01:59 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form{

	public:
		Form(void);
		Form(const std::string name, int const signing_grade, int const executing_grade);
		Form(Form const & src);
		Form &	operator=(Form const & rhs);
		~Form(void);
		std::string	getName(void) const;
		bool	getIsSigned(void) const;
		int	getSigningGrade(void) const;
		int	getExecutingGrade(void) const;
		void	beSigned(Bureaucrat& b);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string	_name;
		bool	_is_signed;
		int const	_signing_grade;
		int const	_executing_grade;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
