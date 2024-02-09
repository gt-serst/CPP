/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:40:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/09 14:25:13 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat{

	public:
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
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		std::string	getName(void);
		int	getGrade(void);
		void	Upgrade(void);
		void	Downgrade(void);

	private:
		std::string const	_name;
		int	_grade;
};

#endif
