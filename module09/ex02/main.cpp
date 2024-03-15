/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/15 12:01:49 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <vector>
#include <ctime>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		PmergeMe< std::vector<int> >	fj;
	
		clock_t start_time = clock();
		fj.mergeInsertionSort(argv);
		clock_t end_time = clock();
		double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
		std::cout << "Sort took " << elapsed_time << " seconds to run" << std::endl;
	}

	return (0);
}
