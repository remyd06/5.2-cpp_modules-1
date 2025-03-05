/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:20:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/03/04 12:51:57 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	const std::string	levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void				(Harl::*pointerToFunctions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (unsigned int i = 0; i < 4; i++)
	{
		if (level == levelArray[i])
		{
			(this->*pointerToFunctions[i])();
			return ;
		}
	}
	std::cerr << "Error, wrong word !" << std::endl;
}
