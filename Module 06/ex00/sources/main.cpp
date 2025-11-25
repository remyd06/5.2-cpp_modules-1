/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 05:59:01 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/17 05:59:01 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid argument." << std::endl;
		return (1);
	}
	try
	{
		ScalarConvert::convert(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}