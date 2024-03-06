/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:52:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/06 16:40:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack() {};
		MutantStack(MutantStack const & src):std::stack<T>(src) {};
		~MutantStack()
		{
			this->c.clear();
		};

		MutantStack & operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
			{
				this->c = rhs.c;
			}
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif
