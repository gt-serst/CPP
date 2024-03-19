/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:49 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 11:16:30 by gt-serst         ###   ########.fr       */
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

	if (this != &rhs)
		this->_btc_value = rhs._btc_value;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void){

	return;
}

void	BitcoinExchange::readCsvDb(void){

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
	if (line.compare("date,exchange_rate") == 0)
	{
		while (std::getline(ifs, line))
			csvDbChecker(line);
	}
	else
		throw BitcoinExchange::BadInputError();
	ifs.close();
}

void	BitcoinExchange::readInputDb(char *argv){

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
	if (line.compare("date | value") == 0)
	{
		while (std::getline(ifs, line))
			tryInput(line);
	}
	else
		throw BitcoinExchange::BadInputError();
	ifs.close();
}

void	BitcoinExchange::tryInput(std::string line){

	try
	{
		InputDbChecker(line);
	}
	catch (BitcoinExchange::NonPositiveNumberError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::BadInputError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::OutOfRangeError& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

bool	BitcoinExchange::csvDbChecker(std::string line){

	if (!checkDate(line))
		return (throw BitcoinExchange::BadInputError(), false);
	else if (!checkDupDate(line) || !checkCsvValue(line))
		return (false);
	this->_btc_value[line.substr(0, 10)] = std::atof(line.substr(11, line.size() - 10).c_str());
	return (true);
}

bool	BitcoinExchange::InputDbChecker(std::string line){

	if (!checkDate(line))
		return (throw BitcoinExchange::BadInputError(), false);
	else if (!checkInputValue(line))
		return (false);
	getDatePairs(line.substr(0, 10), std::atof(line.substr(12, line.size() - 11).c_str()));
	return (true);
}

bool	BitcoinExchange::checkDate(std::string line){

	int year, month, day;

	if (!parseYear(line, year) || !parseMonth(line, month) || !parseDay(line, day))
		return (false);
	if (year < 2009 || year > 2023)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (month == 2)
	{
		if (!isValidDayForFebruary(year, day))
			return (false);
	}
	else
	{
		if (!isValidDayForMonth(month, day))
			return (false);
	}
	return (true);
}

bool	BitcoinExchange::parseYear(const std::string& line, int& year){

	year = std::atoi(line.substr(0, 4).c_str());
	return (line.size() >= 4 && line[4] == '-' && year != 0);
}

bool	BitcoinExchange::parseMonth(const std::string& line, int& month){

	month = std::atoi(line.substr(5, 2).c_str());
	return (line.size() >= 7 && line[7] == '-' && month >= 1 && month <= 12);
}

bool	BitcoinExchange::parseDay(const std::string& line, int& day){

	day = std::atoi(line.substr(8, 2).c_str());
	return (line.size() >= 10 && day >= 1 && day <= 31);
}

bool	BitcoinExchange::isValidDayForFebruary(int year, int day){

	if (year % 4 != 0 && day > 28)
		return (false);
	if (year % 4 == 0 && day > 29)
		return (false);
	return (true);
}

bool BitcoinExchange::isValidDayForMonth(int month, int day){

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	return (true);
}

bool	BitcoinExchange::checkDupDate(std::string line){

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

bool	BitcoinExchange::checkCsvValue(std::string line){

	int			i;
	std::string	substr;
	float		value;

	substr = line.substr(10, 1);
	if (substr.compare(",") != 0)
		return (throw BitcoinExchange::BadInputError(), false);
	value = std::atof(line.substr(11, line.size() - 10).c_str());
	if (value < 0)
		return (throw BitcoinExchange::NonPositiveNumberError(), false);
	else if (value > INT_MAX)
		return (throw BitcoinExchange::OutOfRangeError(), false);
	i = 11;
	while (line[i])
	{
		if (!std::isdigit(line[i]) && line[i] != '.')
			return (throw BitcoinExchange::BadInputError(), false);
		i++;
	}
	return (true);
}

bool	BitcoinExchange::checkInputValue(std::string line){

	int			i;
	std::string	substr;
	float		value;

	substr = line.substr(10, 3);
	if (substr.compare(" | ") != 0)
		return (throw BitcoinExchange::BadInputError(), false);
	value = std::atof(line.substr(13, line.size() - 12).c_str());
	if (value < 0)
		return (throw BitcoinExchange::NonPositiveNumberError(), false);
	else if (value > 1000)
		return (throw BitcoinExchange::OutOfRangeError(), false);
	i = 13;
	while (line[i])
	{
		if (!std::isdigit(line[i]) && line[i] != '.')
			return (throw BitcoinExchange::BadInputError(), false);
		i++;
	}
	return (true);
}

void	BitcoinExchange::getDatePairs(std::string line, float number){

	for (std::map<std::string, float>::iterator it = this->_btc_value.begin(); it != this->_btc_value.end(); ++it)
	{
		if (it->first == line)
		{
			std::cout << line << " => " << number << " = " << it->second * number << std::endl;
			return;
		}
	}
	findLowerDate(line, number);
}

void	BitcoinExchange::findLowerDate(std::string line, float number){

	int	min_difference = std::numeric_limits<int>::max();
	std::map<std::string, float>::iterator	nearest_date;

	for (std::map<std::string, float>::iterator it = this->_btc_value.begin(); it != this->_btc_value.end(); ++it)
	{
		int year, month, day;
		sscanf(it->first.c_str(), "%d-%d-%d", &year, &month, &day);
		int db_value = (year * 365) + (month * 30) + day;
		sscanf(line.c_str(), "%d-%d-%d", &year, &month, &day);
		int target_value = (year * 365) + (month * 30) + day;
		int difference = abs(db_value - target_value);
		if (difference < min_difference && db_value < target_value)
		{
			min_difference = difference;
			nearest_date = it;
		}
	}
	std::cout << nearest_date->first << " => " << number << " = " <<  nearest_date->second * number << std::endl;
}
