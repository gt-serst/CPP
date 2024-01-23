/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:33:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 10:05:38 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	int		error;
	Point	a(0, 0);
	Point	b(6, 6);
	Point	c(12, 0);
	Point	point(3, 3);

	error = bsp(a, b, c, point);
	std::cout << error << std::endl;

	return 0;
}
