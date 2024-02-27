/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:07:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/27 14:03:01 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>

class ElementNotFound : public std::exception{

	public:
		virtual const char* what() const throw(){
		
			return ("Element not found in container");
		}
};

template<typename T>
void	easyfind(T lst, int to_find){

	typename T::const_iterator	it;
	
	it = std::find(lst.begin(), lst.end(), to_find);
	if (it != lst.end())
		std::cout << "Element found in container: " << *it << std::endl;
	else
		throw ElementNotFound();
}
