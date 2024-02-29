/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:52:40 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/29 17:35:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <cstddef>

template<typename T>
class MutantStack{

	public:
		MutantStack(void);
		MutantStack(MutantStack const & src);
		MutantStack &	operator=(MutantStack const & rhs);
		~MutantStack(void);
		bool							empty(void) const;
		unsigned int					size(void) const;
		const T&						top(void) const;
		void 							push(const T& val);
		template <typename Arg> void	emplace (Arg & arg);
		void 							pop(void);
		void 							swap(MutantStack& x);

		struct iterator
		{
			public:	
				iterator(T* ptr) : _ptr(ptr) { return; };
				iterator(iterator const & src) { *this = src; return; };
				iterator &	operator=(iterator const & rhs){ this->_ptr = rhs._ptr; return (*this); }
				~iterator(void) { return; };

				T&			operator*(void) const { return (*_ptr); }
				T*			operator->(void) { return (_ptr); }

				iterator&	operator++(void) { _ptr++; return (*this); }
				iterator&	operator--(void) { _ptr--; return (*this); }

				iterator	operator++(int) { iterator tmp = *this; ++(*this); return (tmp); }
				iterator	operator--(int) { iterator tmp = *this; --(*this); return (tmp); }

				friend bool	operator==(const iterator& a, const iterator& b) { return (a._ptr == b._ptr); };
    			friend bool	operator!=(const iterator& a, const iterator& b) { return (a._ptr != b._ptr); };

				friend bool	operator>(const iterator& a, const iterator& b) { return (a._ptr > b._ptr); };
    			friend bool	operator<(const iterator& a, const iterator& b) { return (a._ptr < b._ptr); };
				friend bool	operator>=(const iterator& a, const iterator& b) { return (a._ptr >= b._ptr); };
    			friend bool	operator<=(const iterator& a, const iterator& b) { return (a._ptr <= b._ptr); };

			private:
				T*	_ptr;
		};

		iterator		begin(void) { return (iterator(&_stack.top() - _stack.size() + 1)); }
    	iterator		end(void)   { return (iterator(&_stack.top() + 1)); }

	private:
		std::stack<T>	_stack;	
};

# include "MutantStack.tpp"

#endif

