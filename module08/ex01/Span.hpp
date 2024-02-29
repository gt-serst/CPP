/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:03:38 by gt-serst          #+#    #+#             */
/*   Updated: 2024/02/29 14:17:53 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>

class Span{

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		Span &	operator=(Span const & rhs);
		~Span(void);
		void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addSeveralNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);

		class SpanIsFull : public std::exception{
	
			public:	
				virtual const char*	what() const throw(){
			
					return ("Span is full, cannot add number into it");
				}
		};

		class SpanIsEmpty : public std::exception{
		
			public:
				virtual const char*	what() const throw(){
			
					return ("Span is empty or only has one number, cannot compute distance");
				}
		};

		void	display(void);

	private:
		std::vector<int>	_vec;
		unsigned int	_size;
};

#endif
