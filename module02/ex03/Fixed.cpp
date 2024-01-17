/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:19:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 10:57:07 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fixed_point_value(0){

	return;
}

Fixed::Fixed(int const n) : _fixed_point_value(n << _fractional_bits){

	return;
}

Fixed::Fixed(float const n) : _fixed_point_value(std::roundf(n * (1 << _fractional_bits))){

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

	this->_fixed_point_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const{

	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const & rhs) const{

	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const & rhs) const{

	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const & rhs) const{

	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const & rhs) const{

	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const & rhs) const{

	return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & rhs){

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs){

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs){

	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs){

	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &	Fixed::operator++(void){

	++_fixed_point_value;
	return *this;
}

Fixed &	Fixed::operator--(void){

	--_fixed_point_value;
	return *this;
}

Fixed	Fixed::operator++(int){

	Fixed temp(*this);
	++_fixed_point_value;
	return temp;
}

Fixed	Fixed::operator--(int){

	Fixed temp(*this);
	--_fixed_point_value;
	return temp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b){

	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed &	Fixed::min(Fixed const & a, Fixed const & b){

	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b){

	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed &	Fixed::max(Fixed const & a, Fixed const & b){

	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

int	Fixed::getRawBits(void) const{

	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw){

	this->_fixed_point_value = raw;
}

float	Fixed::toFloat(void) const {

	return static_cast<float>(_fixed_point_value) / (1 << _fractional_bits);
}

int	Fixed::toInt(void) const {

	return _fixed_point_value >> _fractional_bits;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){

	o << rhs.toFloat();
	return o;
}
