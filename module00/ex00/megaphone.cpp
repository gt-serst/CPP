/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:37:25 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/05 15:09:07 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
					argv[i][j] -= 32;
				j++;
			}
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
