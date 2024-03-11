/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:32:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/11 09:53:54 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>

class BitcoinExchange{

	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src)
		BitcoinExchange &	operator=(BitcoinExchange const & rhs);
		~Bitcoin(void);
	private:
		std::map	_btc_value;
		int			_btc_number;
		int			_my_value;
};

#endif
