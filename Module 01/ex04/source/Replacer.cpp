/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:40:56 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/21 13:32:31 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replacer.hpp"

void replacer(std::ifstream &infile, std::string &s1, std::string &s2)
{
	std::string		line;
	std::ofstream	outfile("outfile.txt");

	if (!outfile.is_open())
	{
		std::cerr << "Error opening outfile\n";
		return ;
	}

	while (std::getline(infile, line))
	{
		std::string new_line;
		size_t pos = 0;
		size_t found;

		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			new_line += line.substr(pos, found - pos);
			new_line += s2;
			pos = found + s1.length();
		}
		new_line += line.substr(pos);
		outfile << new_line << "\n";
	}

	infile.close();
	outfile.close();
}
