/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:54:03 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/27 11:22:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <string>
# include <iostream>

template<typename T>
class Array{

	public:
		Array(void) : _size(0){

			this->_array = new T[0];
			return;
		}

		Array(unsigned int n) : _size(n){

			this->_array = new T[n];
			return;
		}

		Array(Array & src){

			this->_size = src._size;
			this->_array = new T[src._size];
			*this = src;
			return;
		}

		Array &	operator=(Array const & rhs){

			if (this->_array)
				delete[] this->_array;
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (size_t i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		~Array(void){

			delete[] this->_array;
			return;
		}

		unsigned int	size(void) const{

			return (this->_size);
		}

		T & operator[](unsigned int i) {

			if (i >= this->_size)
				throw IndexOutOfBoundsException();
			return _array[i];
		}

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw(){

					return ("Index out of bounds");
				}
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#endif
