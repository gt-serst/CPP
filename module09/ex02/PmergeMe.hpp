/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:44:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/18 12:32:12 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <deque>
# include <vector>
# include <utility>

class PmergeMe{

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe &							operator=(PmergeMe const & rhs);
		~PmergeMe(void);

		void								mergeInsertionSort(char **argv, std::deque<int>& deq);
		std::deque< std::pair<int, int> >	sortEachPair(std::deque<int> raw_array);
		void								insertionSortPairs(std::deque< std::pair<int, int> >& A, long n);
		void								insert(std::pair<int, int> element, std::deque< std::pair<int, int> >& A, long n);
		std::deque<int>						createSequence(std::deque< std::pair<int, int> > sorted_split_array, int straggler);
		std::deque<long>					buildJacobInsertionSequence(std::deque<int> pend);

		void								mergeInsertionSort(char **argv, std::vector<int>& vect);
		std::vector< std::pair<int, int> >	sortEachPair(std::vector<int> raw_array);
		void								insertionSortPairs(std::vector< std::pair<int, int> >& A, long n);
		void								insert(std::pair<int, int> element, std::vector< std::pair<int, int> >& A, long n);
		std::vector<int>					createSequence(std::vector< std::pair<int, int> > sorted_split_array, int straggler);
		std::vector<long>					buildJacobInsertionSequence(std::vector<int> pend);

		long								jacobsthal(long n);
};

#endif
