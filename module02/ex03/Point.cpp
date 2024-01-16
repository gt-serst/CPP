/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:23:02 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/16 15:27:13 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){

	return;
}

Point::Point(float const f1, float const f2) : _x(f1), _y(f2){

	return;
}

Point::Point(Point const & src){

	*this = src;
	return;
}

Point &	Point:operator=(Point const & rhs){
}

Point::~Point(void){

	return;
}
