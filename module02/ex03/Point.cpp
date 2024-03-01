/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:23:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 13:14:57 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){

	return;
}

Point::Point(float const a, float const b) : _x(a), _y(b){

	return;
}

Point::Point(const Point &src) : _x(src._x), _y(src._y){

	return;
}

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		(Fixed) this->_x = rhs.getX();
		(Fixed) this->_y = rhs.getY();
	}
	return (*this);
}

Point::~Point(void){

	return;
}

Fixed	Point::getX(void) const{

	return this->_x;
}

Fixed	Point::getY(void) const{

	return this->_y;
}


