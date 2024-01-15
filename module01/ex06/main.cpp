/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:48 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/15 12:08:32 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	int			level;
	std::string str_arg;
	Harl		instance;
	Harl *		instancep = &instance;

	void	(Harl::*f)(std::string level) const;

	if (argc != 2)
		return (0);
	f = &Harl::complain;
	str_arg = argv[1];
	if (str_arg == "DEBUG")
		level = 1;
	if (str_arg == "INFO")
		level = 2;
	if (str_arg == "WARNING")
		level = 3;
	if (str_arg == "ERROR")
		level = 4;
	switch (level)
	{
		case 1:
			(instancep->*f)("DEBUG");
			(instancep->*f)("INFO");
			(instancep->*f)("WARNING");
			(instancep->*f)("ERROR");
			break;
		case 2:
			(instancep->*f)("INFO");
			(instancep->*f)("WARNING");
			(instancep->*f)("ERROR");
			break;
		case 3:
			(instancep->*f)("WARNING");
			(instancep->*f)("ERROR");
			break;
		case 4:
			(instancep->*f)("ERROR");
			break;
		default:
			break;
	}
	(void)argc;
	(void)argv;
	return (0);
}
