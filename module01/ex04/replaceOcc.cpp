/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceOcc.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:07:49 by gt-serst          #+#    #+#             */
/*   Updated: 2024/03/18 14:07:51 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

bool	writeOf(std::string filename, std::string buf);

bool	replaceOcc(std::string buf, std::string filename, std::string str_to_find, std::string replacement_str)
{
	std::size_t pos;
	std::size_t last_pos;
	std::string sed_str;

	pos = buf.find(str_to_find, 0);
	last_pos = 0;
	while (pos != std::string::npos)
	{
		if (str_to_find.compare("") == 0)
			break;
		sed_str.append(buf.substr(last_pos, pos - last_pos));
		sed_str.append(replacement_str);
		last_pos = pos + str_to_find.length();
		pos = buf.find(str_to_find, last_pos);
	}
	sed_str.append(buf.substr(last_pos));
	if (!writeOf(filename, sed_str))
		return (false);
	return (true);
}
