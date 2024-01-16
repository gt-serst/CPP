/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:19:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/16 11:46:36 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _n(0){

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const i) : _n(i << _bits_n){

	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const f) : _n(static_cast<int>(roundf(f * (1 << _bits_n)))){

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
	this->_n = rhs.getRawBits();
	return *this;
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
