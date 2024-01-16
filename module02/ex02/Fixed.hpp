/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:13:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/16 15:29:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed &				operator=(Fixed const & rhs);
	bool				operator>(Fixed const & rhs) const;
	bool				operator<(Fixed const & rhs) const;
	bool				operator>=(Fixed const & rhs) const;
	bool				operator<=(Fixed const & rhs) const;
	bool				operator==(Fixed const & rhs) const;
	bool				operator!=(Fixed const & rhs) const;
	Fixed				operator+(Fixed const & rhs);
	Fixed				operator-(Fixed const & rhs);
	Fixed				operator*(Fixed const & rhs);
	Fixed				operator/(Fixed const & rhs);
	Fixed &				operator++(void);
	Fixed &				operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	static Fixed		min(Fixed & i, Fixed & j);
	static Fixed		min(Fixed const & i, Fixed const & j);
	static Fixed		max(Fixed & i, Fixed & j);
	static Fixed		max(Fixed const & i, Fixed const & j);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
private:
	int					_n;
	static int const	_bits_n = 8;
};

std::ostream &			operator<<(std::ostream & o, Fixed const & rhs);

#endif
