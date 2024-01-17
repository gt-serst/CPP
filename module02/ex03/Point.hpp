/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:19:28 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/17 10:43:40 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
public:
	Point(void);
	Point(float const a, float const b);
	Point(Point const & src);
	Point &	operator=(Point const & rhs);
	~Point(void);
private:
	Fixed const	_x;
	Fixed const	_y;
};

#endif
