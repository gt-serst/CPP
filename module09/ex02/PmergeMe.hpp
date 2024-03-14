/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:44:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/14 12:27:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <utility>

template <typename T>
class PmergeMe{

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe &							operator=(PmergeMe const & rhs);
		~PmergeMe(void);
		void								mergeInsertionSort(char **argv);
		std::vector< std::pair<int, int> >	insertionSort(T raw_array);
	private:
		T	_S;
};

# include "PmergeMe.cpp"

#endif
