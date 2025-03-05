/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:40:26 by rdedola           #+#    #+#             */
/*   Updated: 2025/03/04 10:05:17 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong arguments. Only ./replacer <myfile.txt> <s1> <s2>\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error opening infile\n";
		return (1);
	}
	replacer(infile, s1, s2);
}
