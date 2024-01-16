/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:19:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/16 15:16:43 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _n(0){

	return;
}

Fixed::Fixed(int const i) : _n(i << _bits_n){

	return;
}

Fixed::Fixed(float const f) : _n(static_cast<int>(roundf(f * (1 << _bits_n)))){

	return;
}

Fixed::Fixed(Fixed const & src){

	*this = src;
	return;
}

Fixed::~Fixed(void){

	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs){

	this->_n = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const{

	return _n > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const & rhs) const{

	return _n < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const & rhs) const{

	return _n >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const & rhs) const{

	return _n <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const & rhs) const{

	return _n == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const & rhs) const{

	return _n != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & rhs){

	return Fixed(this->_n + rhs.getRawBits());
}

Fixed	Fixed::operator-(Fixed const & rhs){

	return Fixed(this->_n - rhs.getRawBits());
}

Fixed	Fixed::operator*(Fixed const & rhs){

	return Fixed(this->_n * rhs.getRawBits());
}

Fixed	Fixed::operator/(Fixed const & rhs){

	return Fixed(this->_n / rhs.getRawBits());
}

Fixed &	Fixed::operator++(void){

	++_n;
	return *this;
}

Fixed &	Fixed::operator--(void){

	--_n;
	return *this;
}

Fixed	Fixed::operator++(int){

	Fixed temp(*this);
    ++_n;
    return temp;
}

Fixed	Fixed::operator--(int){

	Fixed temp(*this);
	--_n;
	return temp;
}

Fixed	Fixed::min(Fixed & i, Fixed & j){

	if (i < j)
		return i;
	else
		return j;
}

Fixed	Fixed::min(Fixed const & i, Fixed const & j){

	if (i < j)
		return i;
	else
		return j;
}

Fixed	Fixed::max(Fixed & i, Fixed & j){

	if (i > j)
		return i;
	else
		return j;
}

Fixed	Fixed::max(Fixed const & i, Fixed const & j){

	if (i > j)
		return i;
	else
		return j;
}

int	Fixed::getRawBits(void) const{

	return this->_n;
}

void	Fixed::setRawBits(int const raw){

	this->_n = raw;
}

float Fixed::toFloat(void) const {
    
	return static_cast<float>(_n) / (1 << _bits_n);
}

int Fixed::toInt(void) const {
    
	return _n >> _bits_n;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){

	o << rhs.toFloat();
	return o;
}
