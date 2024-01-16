/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:19:28 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/16 15:28:59 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

class Point{
public:
	Point(void);
	Point(float const f1, float const f2);
	Point(Point const & src);
	Point &	operator=(Point const & rhs);
	~Point(void);
private:
	Fixed const	_x;
	Fixed const	_y;
};
