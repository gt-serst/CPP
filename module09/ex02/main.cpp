/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:17 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/13 17:05:13 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		PmergeMe	pmergeme;

		pmergeme.mergeInsertionSort(argv[1]);
	}
	return (0);
}
