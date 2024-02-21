/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:19:28 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/21 15:58:20 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
public:
	Point(void);
	Point(float const a, float const b);
	Point(Point const & src);
	Point &	operator=(Point const & rhs);
	~Point(void);
	Fixed	getX(void) const;
	Fixed	getY(void) const;
private:
	Fixed const	_x;
	Fixed const	_y;
};

#endif
