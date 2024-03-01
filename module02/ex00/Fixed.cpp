/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:19:33 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:13:00 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fixed_point_value(0){

	std::cout << "Default constructor called" << std::endl;
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

	if (this != &rhs)
		this->_fixed_point_value = rhs.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const{

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw){

	this->_fixed_point_value = raw;
}
