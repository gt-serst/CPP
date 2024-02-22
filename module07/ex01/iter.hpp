/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:56:30 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/22 17:06:29 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	f(T array)
{
	array++;
}

template<typename T>
void	iter(T * array, int length, void(*f)(T)){
	for(size_t i = 0; i < length; i++)
		(*f)(array[length]);
}
