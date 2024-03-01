/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:23:35 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/01 10:52:37 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T & x, T & y){

	T z = x;
	x = y;
	y = z;
}

template<typename T>
T const &	min(T const & x, T const & y){

	return ((x < y) ? x : y);
}

template<typename T>
T const &	max(T const & x, T const & y){
	
	return ((x > y) ? x : y);
}

#endif
