/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:33:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/11 17:17:59 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	(void)argc;
	try
	{
		BitcoinExchange	btc;
		btc.read_csv_db();
		btc.read_input_db(argv[1]);
		btc.get_date_pairs();
	}
	catch (BitcoinExchange::OpenError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::NonPositiveNumberError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::BadInputError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::DuplicateDateError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::OutOfRangeError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
