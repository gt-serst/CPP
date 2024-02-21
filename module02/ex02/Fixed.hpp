/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:13:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:58:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed &	operator=(Fixed const & rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int	toInt(void) const;

	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);

	Fixed &	operator++(void);
	Fixed &	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed &	min(Fixed & a, Fixed & b);
	static const Fixed &	min(Fixed const & a, Fixed const & b);
	static Fixed &	max(Fixed & a, Fixed & b);
	static const Fixed &	max(Fixed const & a, Fixed const & b);
private:
	int	_fixed_point_value;
	static int const	_fractional_bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
