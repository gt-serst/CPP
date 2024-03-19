/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 11:32:49 by gt-serst         ###   ########.fr       */
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
		void				tryInput(const std::string line);
		bool				csvDbChecker(const std::string line);
		bool				InputDbChecker(const std::string line);
		bool				checkDate(const std::string line);
		bool				parseYear(const std::string& line, int& year);
		bool				parseMonth(const std::string& line, int& month);
		bool				parseDay(const std::string& line, int& day);
		bool				isValidDayForFebruary(int year, int day);
		bool 				isValidDayForMonth(int month, int day);
		bool				checkDupDate(const std::string line);
		bool				checkCsvValue(const std::string line);
		bool				checkInputValue(const std::string line);
		void				getDatePairs(const std::string line, float number);
		void				findLowerDate(const std::string, float number);

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
