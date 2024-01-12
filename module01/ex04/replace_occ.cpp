/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:17:28 by gt-serst          #+#    #+#             */
/*   Updated: 2024/01/12 16:13:59 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

bool	write_of(std::string filename, std::string buf);

bool replace_occ(char **argv, char *buffer)
{
	std::size_t pos;
	std::size_t last_pos;
	std::string content;
	
	std::string buf = buffer;
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	pos = buf.find(s1, 0);
	last_pos = 0;
	while (pos != std::string::npos)
	{
		if (s1.compare("") == 0)
			break;
		content.append(buf.substr(last_pos, pos - last_pos));
		content.append(s2);
		last_pos = pos + s1.length();
		pos = buf.find(s1, last_pos);
	}
	content.append(buf.substr(last_pos));
	if (!write_of(filename, content))
		return (false);
	return (true);
}
