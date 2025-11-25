/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifyReference.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:58:54 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/25 12:24:10 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{

	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{

	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{

	}
	std::cout << "Type unknown" << std::endl;
}
