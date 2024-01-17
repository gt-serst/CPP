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

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const n) : _fixed_point_value(n << _fractional_bits){

	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const n) : _fixed_point_value(std::roundf(n * (1 << _fractional_bits))){

	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void){

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs){

	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{

	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw){

	this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const {

	return static_cast<float>(_fixed_point_value) / (1 << _fractional_bits);
}

int Fixed::toInt(void) const {

	return _fixed_point_value >> _fractional_bits;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){

	o << rhs.toFloat();
	return o;
}
