/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:53:38 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/19 18:09:18 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#	define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter{

	public:
		static void	convert(std::string& input);
};

bool	isChar(std::string& input);
bool	isInt(std::string& input);
bool	isFloat(std::string& input);
bool	isDouble(std::string& input);

#endif
