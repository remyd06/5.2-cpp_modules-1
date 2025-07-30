/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 23:22:42 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/30 21:14:26 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	Span sp1 = Span(1);
	Span sp2 = Span(3);
	Span sp3 = Span(10000);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
        std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
        std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		sp2.addNumber(6);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
        std::cerr << "Error : " << e.what() << std::endl;
	}

	try
	{
		for(int i = 0; i < 10000; ++i)
			sp3.addNumber(i);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
        std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;


	
	return 0;
}
