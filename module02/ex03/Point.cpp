/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:23:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 10:43:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){

	return;
}

Point::Point(float const a, float const b) : _x(a), _y(b){

	return;
}

Point::Point(Point const & src){

	*this = src;
	return;
}

Point &	Point::operator=(Point const & rhs){
}

Point::~Point(void){

	return;
}
