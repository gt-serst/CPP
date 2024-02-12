/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:40:18 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/12 14:12:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat{

	public:
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
