/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:40:56 by rdedola           #+#    #+#             */
/*   Updated: 2025/03/04 10:11:10 by rdedola          ###   ########.fr       */
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
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
		}
		outfile << line << "\n";
	}
	infile.close();
	outfile.close();
}
