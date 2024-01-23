/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:23:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 09:58:17 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){

	return;
}

Point::Point(float const a, float const b) : _x(a), _y(b){

	return;
}

Point::Point(Point const & src) : _x(src._x), _y(src._y){

	return;
}

/*Point &	Point::operator=(Point const & rhs){

	return *this;
}*/

Point::~Point(void){

	return;
}

Fixed	Point::getX(void) const{

	return this->_x;
}

Fixed	Point::getY(void) const{

	return this->_y;
}


