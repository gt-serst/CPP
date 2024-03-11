/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:49 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/11 17:18:01 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>
#include <iostream>

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
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void){

	return;
}

void	BitcoinExchange::read_csv_db(void){

	int				length;	
	std::ifstream	ifs;
	
	ifs.open("data.csv", std::ifstream::binary);
	if (ifs)
	{
		ifs.seekg (0, ifs.end);
		length = ifs.tellg();
		ifs.seekg (0, ifs.beg);
	}
	else
		throw BitcoinExchange::OpenError();
	std::string	line;
	std::getline(ifs, line);
	while (std::getline(ifs, line))
	{
		if (!csv_db_checker(line))
			break;
	}
	ifs.close();
}

void	BitcoinExchange::read_input_db(char *argv){

	int				length;
	std::ifstream	ifs;

	ifs.open(argv, std::ifstream::binary);
	if (ifs)
	{
		ifs.seekg(0, ifs.end);
		length = ifs.tellg();
		ifs.seekg(0, ifs.beg);
	}
	else
		throw BitcoinExchange::OpenError();
	std::string	line;
	std::getline(ifs, line);
	while (std::getline(ifs, line))
	{
		if (!input_db_checker(line))
			break;
	}
	ifs.close();
}

bool	BitcoinExchange::csv_db_checker(std::string line){

	if (!check_date(line))
		return (throw BitcoinExchange::BadInputError(), false);
	else if (!check_dup_date(line) || !check_csv_value(line))
		return (false);
	this->_btc_value[line.substr(0, 10)] = std::atof(line.substr(11, line.size() - 10).c_str());
	std::cout << this->_btc_value[line.substr(0, 10)] << std::endl;
	return (true);
}

bool	BitcoinExchange::input_db_checker(std::string line){

	if (!check_date(line))
		return (throw BitcoinExchange::BadInputError(), false);
	else if (!check_input_value(line))
		return (false);
	this->_btc_number[line.substr(0, 10)] = std::atof(line.substr(12, line.size() - 11).c_str());
	std::cout << this->_btc_number[line.substr(0, 10)] << std::endl;
	return (true);
}

bool	BitcoinExchange::check_date(std::string line){

	std::string	substr;
	int			year;
	int			month;
	int			day;

	year = std::atoi(line.substr(0, 4).c_str());
	if (year < 2009 || year > 2024)
		return (false);
	substr = line.substr(4, 1);
	if (substr.compare("-") != 0)
		return (false);
	month = std::atoi(line.substr(5, 2).c_str());
	if (month < 0 || month > 12)
		return (false);
	substr = line.substr(7, 1);
	if (substr.compare("-") != 0)
		return (false);
	day = std::atoi(line.substr(8, 2).c_str());
	if (month == 2)
	{
		if (year % 4 != 0)
		{
			if (day < 0 || day > 28)
				return (false);
		}
		else
		{
			if (day < 0 || day > 29)
				return (false);
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 0 || day > 30)
			return (false);
	}
	else
	{
		if (day < 0 || day > 31)
			return (false);
	}
	return (true);
}

bool	BitcoinExchange::check_dup_date(std::string line){

	if (this->_btc_value.empty())
		return (true);

	std::map<std::string, float>::iterator it = this->_btc_value.begin();

	while (it != this->_btc_value.end())
	{
		if (it->first.compare(line.substr(0, 10)) == 0)
			return (throw BitcoinExchange::DuplicateDateError(), false);
		it++;
	}
	return (true);
}

bool	BitcoinExchange::check_csv_value(std::string line){

	std::string		substr;
	float			value;

	substr = line.substr(10, 1);
	if (substr.compare(",") != 0)
		return (throw BitcoinExchange::BadInputError(), false);
	value = std::atof(line.substr(11, line.size() - 10).c_str());
	if (value < 0 || value > INT_MAX)
		return (throw BitcoinExchange::OutOfRangeError(), false);
	return (true);	
}

bool	BitcoinExchange::check_input_value(std::string line){

	std::string		substr;
	float			value;

	substr = line.substr(11, 1);
	if (substr.compare("|") != 0)
		return (throw BitcoinExchange::BadInputError(), false);
	value = std::atof(line.substr(12, line.size() - 11).c_str());
	if (value < 0 || value > 1000)
		return (throw BitcoinExchange::OutOfRangeError(), false);
	return (true);	
}

void	BitcoinExchange::get_date_pairs(void){

	for (std::map<std::string, float>::iterator it1 = this->_btc_number.begin(); it1 != this->_btc_number.end(); ++it1)
	{
		std::map<std::string, float>::iterator it2 = this->_btc_value.find(it1->first);
		if (it2 != this->_btc_value.end())
			std::cout << it1->first << " => " << it1->second << " = " << it1->second * it2->second << std::endl;
	}
}

void	compute_value(void);
void	print_value(void);
