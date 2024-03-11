/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/11 17:18:03 by gt-serst         ###   ########.fr       */
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
		void				read_csv_db(void);
		void				read_input_db(char *argv);
		bool				csv_db_checker(std::string line);
		bool				input_db_checker(std::string line);
		bool				check_date(std::string line);
		bool				check_dup_date(std::string line);
		bool				check_csv_value(std::string line);
		bool				check_input_value(std::string line);
		void				get_date_pairs(void);

		class OpenError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: could not open file.");
				}
		};

		class NonPositiveNumberError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: not a positive number.");
				}
		};

		class BadInputError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: bad input.");
				}
		};

		class DuplicateDateError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: duplicate date.");
				}
		};

		class OutOfRangeError : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error: out of range number.");
				}
		};

	private:
		std::map<std::string, float>	_btc_value;
		std::map<std::string, float>		_btc_number;
};

#endif
