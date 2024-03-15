/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:44:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/15 12:01:46 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <vector>
# include <utility>

template <typename T>
class PmergeMe{

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe &							operator=(PmergeMe const & rhs);
		~PmergeMe(void);
		void								mergeInsertionSort(char **argv);
		std::vector< std::pair<int, int> >	sortEachPair(T raw_array);
		void								insertionSortPairs(std::vector< std::pair<int, int> >& A, long n);
		void								insert(std::pair<int, int> element, std::vector< std::pair<int, int> >& A, long n);
		T									createSequence(std::vector< std::pair<int, int> > sorted_split_array, int straggler);
		std::vector<long>					buildJacobInsertionSequence(T pend);
		long								jacobsthal(long n);
	private:
		T	_S;
};

# include "PmergeMe.cpp"

#endif
