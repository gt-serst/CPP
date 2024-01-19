/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_of.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:03:49 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 15:51:52 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	write_of(std::string filename, std::string sed_str)
{
	std::ofstream ofs(filename.append(".replace"));
	if (ofs.is_open())
	{
		ofs << sed_str;
		ofs.close();
	}
	else
	{
		std::cout << "error: failed to create the file" << std::endl;
		return (false);
	}
	return (true);
}
