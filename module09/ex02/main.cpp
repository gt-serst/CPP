/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/14 12:00:37 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <vector>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		PmergeMe< std::vector<int> >	fj;

		fj.mergeInsertionSort(argv);
	}

	return (0);
}
