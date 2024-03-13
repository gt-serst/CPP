/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:44:57 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/13 17:05:15 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>

template <typename T>
class PmergeMe{

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe	operator=(void);
		~PmergeMe(void);
		void		mergeInsertionSort(std::string A);
		T*			createPairs(std::string a);
		T*			sortEachPair(T* split_array);
		void		sortByLargerValue(T* sorted_split_array);
		void		insertionSortPairs(T* A, int n);
		void		insertionSortPairs(T* A, T::iterator it);
		void		insert(std::pair<int, int> const & elem, T& A, T::iterator it);

	private:
		T*	_S;
};

#endif
