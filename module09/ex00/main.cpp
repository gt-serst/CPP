/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:33:00 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/19 11:05:18 by gt-serst         ###   ########.fr       */
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

		btc.readCsvDb();
		btc.readInputDb(argv[1]);
	}
	catch (BitcoinExchange::OpenError& e)
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
	catch (BitcoinExchange::NonPositiveNumberError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (BitcoinExchange::OutOfRangeError& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
