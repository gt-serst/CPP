/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:53:38 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:24:24 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter{

	public:
		static void	convert(std::string& input);

	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter &	operator=(ScalarConverter const & rhs);
		~ScalarConverter(void);
};

#endif
