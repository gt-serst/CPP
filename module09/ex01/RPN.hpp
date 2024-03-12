/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:05:10 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/12 14:03:43 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <stack>

class RPN{

	public:
		RPN(void);
		RPN(RPN const & src);
		RPN &	operator=(RPN const & rhs);
		~RPN(void);
		void	computePostFix(std::string expr);
		int		isOperator(char c);
		int		isOperand(char c);
		int		ctoi(char c);
		int		operation(int a, int b, char op);
		
		class Error : public std::exception{

			public:
				virtual const char*	what() const throw(){

					return ("Error");
				}
		};

	private:
		std::stack<float>	_stk;	

};

#endif
