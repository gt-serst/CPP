/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:45:21 by gt-serst          #+#    #+#             */
/*   Updated: 2024/05/08 13:50:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	readInputFile(char **argv);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!readInputFile(argv))
			return (1);
	}
	return (0);
}
