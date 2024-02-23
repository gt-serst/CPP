/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:56:30 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/23 13:54:58 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	f(T & x)
{
	x++;
}

template<>
void	f<std::string>(std::string &s)
{
	s += " - modified";
}

template<typename T, typename F>
void	iter(T * array, size_t length, F f){
	for(size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
