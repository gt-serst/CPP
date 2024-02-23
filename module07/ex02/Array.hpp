/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:54:03 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/23 17:32:44 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <string>

template<typename T>
class Array{

	public:
		Array(void){

			this->_array = new T[0];
			return;
		}
		Array(unsigned int n){

			this->_array = new T[n];
			for (size_t i = 0; i < n; i++)
				this->_array[i] = 0;
			return;
		}
		Array(Array & src){

			this->_array = new T [src.size()];
			*this = src;
			return;
		}
		Array &	operator=(Array const & rhs){

			if (this->_array)
				delete[] this->_array;
			this->_array = new T [rhs.size()];
			return (*this);
		}
		~Array(void){

			delete[] this->_array;
			return;
		}
		int	size(void) const{

			int	size;

			size = sizeof(this->_array) / sizeof(this->_array[0]);
			return (size);
		}

	class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw(){

					return ("Index out of bounds");
				}
		};

	private:
		T* _array;
};

/*template<>
class Array<std::string>{

	public:
		Array(void){

			this->_array = new std::string[0];
			return;
		}
		Array(unsigned int n){

			this->_array = new std::string[n];
			for (size_t i = 0; i < n; i++)
				this->_array[i] = "";
			return;
		}
		Array(Array & src){

			this->_array = new std::string [src.size()];
			*this = src;
			return;
		}
		Array &	operator=(Array const & rhs){

			if (this->_array)
				delete[] this->_array;
			this->_array = new std::string [rhs.size()];
			return (*this);
		}
		~Array(void){

			delete[] this->_array;
			return;
		}
		int	size(void) const{

			int	size;

			size = sizeof(this->_array) / sizeof(this->_array[0]);
			return (size);
		}

	class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw(){

					return ("Index out of bounds");
				}
		};

	private:
		std::string* _array;
};*/

#endif
