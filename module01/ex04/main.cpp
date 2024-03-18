/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:45:21 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/18 14:06:25 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	readIf(char **argv);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!readIf(argv))
			return (1);
	}
	return (0);
}
