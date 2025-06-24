/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:39:18 by rdedola           #+#    #+#             */
/*   Updated: 2025/06/24 23:54:30 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
  	{
        Bureaucrat a("Bob", 1);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

	try
	{
		Bureaucrat b("toto", 150);
		b.decrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat c;
		std::cout << c << std::endl;
		c.incrementGrade();
		c.incrementGrade();
		c.incrementGrade();
		c.incrementGrade();
		c.incrementGrade();
		std::cout << c << std::endl;
		c.decrementGrade();
		c.decrementGrade();
		c.decrementGrade();
		c.decrementGrade();
		c.decrementGrade();
		c.decrementGrade();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
