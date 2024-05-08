/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeOuputFile.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:07:53 by gt-serst          #+#    #+#             */
/*   Updated: 2024/05/08 13:51:12 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	writeOuputFile(std::string filename, std::string sed_str)
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
