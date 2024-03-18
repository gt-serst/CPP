/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/18 14:19:23 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>

class BitcoinExchange{

	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange &	operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);
		void				readCsvDb(void);
		void				readInputDb(char *argv);
		void				tryCsv(std::string line);
		void				tryInput(std::string line);
		bool				csvDbChecker(std::string line);
		bool				InputDbChecker(std::string line);
		bool				checkDate(std::string line);
		bool				parseYear(const std::string& line, int& year);
		bool				parseMonth(const std::string& line, int& month);
		bool				parseDay(const std::string& line, int& day);
		bool				isValidDayForFebruary(int year, int day);
		bool 				isValidDayForMonth(int month, int day);
		bool				checkDupDate(std::string line);
		bool				checkCsvValue(std::string line);
		bool				checkInputValue(std::string line);
		void				getDatePairs(std::string line, float number);
		void				findLowerDate(std::string, float number);

		class OpenError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: could not open file");
				}
		};

		class NonPositiveNumberError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: not a positive number");
				}
		};

		class BadInputError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: bad input");
				}
		};

		class DuplicateDateError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: duplicate date");
				}
		};

		class OutOfRangeError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: out of range number");
				}
		};

	private:
		std::map<std::string, float>	_btc_value;
};

#endif
