/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:49 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/11 10:16:48 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

BitcoinExchange::BitcoinExchange(void){

	return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src){

	*this = src;
	return;
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs){

	this->_btc_value = rhs._btc_value;
	this->_btc_number = rhs._btc_number;
	this->_my_value = rhs._my_value;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void){

	return;
}

void	read_csv_db(char *argv){
	
	std::ifstream	ifs;
	
	ifs.open(argv, std::ifstream::binary);
	if (ifs)
	{
		ifs.seekg (0, ifs.end);
		length = ifs.tellg();
		ifs.seekg (0, ifs.beg);
	}
	else
		throw OpenError();
	std::string	str;
	while ((str = get_line(ifs, str, '\n')) != str.empty())
	{	
		if (!checker(str))
			break;
	}
	ifs.close();
}

bool	checker(std::string str){

	if (!check_date || !check_value)
		return (throw SyntaxError(), false);
	return (true);
}

void	check_date(void){

	
}

void	check_value(void);
void	find_exchange_rate(void);
void	compute_value(void);
void	print_value(void);
