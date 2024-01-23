/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:13:27 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/23 09:15:37 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &	operator=(Fixed const & rhs);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int	_fixed_point_value;
		static int const	_fractional_bits = 8;

};

#endif
