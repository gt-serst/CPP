/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:48 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/15 11:43:01 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	instance;
	Harl *	instancep = &instance;

	void	(Harl::*f)(std::string level) const;

	f = &Harl::complain;
	(instancep->*f)("DEBUG");
	(instancep->*f)("INFO");
	(instancep->*f)("WARNING");
	(instancep->*f)("ERROR");
	(void)argc;
	(void)argv;
	return (0);
}
