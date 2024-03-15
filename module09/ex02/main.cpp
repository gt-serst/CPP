/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/15 15:19:01 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <vector>
#include <ctime>

bool	checkArgv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!std::isdigit(argv[i][j]) || std::atoi(argv[i]) < 0)
			{
				std::cerr << "Error" << std::endl;
				return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}

void	printStartingArray(char **argv)
{
	std::cout << "Before: ";

	int	i = 1;
		while (argv[i])
		{
			std::cout << argv[i] << " ";
			i++;
		}
		std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (!checkArgv(argv))
			return (1);

		printStartingArray(argv);

		PmergeMe< std::deque<int> >	d_fj;
		std::deque<int>				deq;

		clock_t d_start_time = clock();
		deq = d_fj.mergeInsertionSort(argv);
		clock_t d_end_time = clock();
		double d_elapsed_time = static_cast<double>(d_end_time - d_start_time) / CLOCKS_PER_SEC;

		std::cout << "After: ";
		for (size_t i = 0; i < deq.size(); ++i) {
			std::cout <<  deq[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << d_elapsed_time * 1000000 << " us" << std::endl;

		PmergeMe< std::vector<int> >	v_fj;
		std::vector<int>				vect;

		clock_t v_start_time = clock();
		vect = v_fj.mergeInsertionSort(argv);
		clock_t v_end_time = clock();
		double v_elapsed_time = static_cast<double>(v_end_time - v_start_time) / CLOCKS_PER_SEC;

		std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : " << v_elapsed_time * 1000000 << " us" << std::endl;
	}

	return (0);
}
