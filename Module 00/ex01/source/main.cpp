/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:03:32 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/02 11:08:36 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	input;

	std::cout << RED "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" RESET << std::endl;
	std::cout << RED "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" RESET << std::endl;
	std::cout << RED "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " RESET << std::endl;
	std::cout << RED "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " RESET << std::endl;
	std::cout << RED "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" RESET << std::endl;
	std::cout << RED "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" RESET << std::endl;
	std::cout << RED "============================= ☭ USSR EDITION ☭ =============================" RESET << std::endl;

	while (1)
	{
		std::cout << std::endl << BOLD "Enter an order comrade: " RESET;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl << RED "PhoneBook Closed." RESET << std::endl;
			break ;
		}
		if (input == "ADD")
		{
			if  (!phoneBook.addContact())
				std::cerr << RED "ERROR" RESET; 
		}
		else if (input == "SEARCH")
		{
			if  (!phoneBook.searchContact())
				std::cerr << RED "ERROR" RESET; 
		}
		else if (input == "EXIT")
		{
			std::cout << RED "☭ THANKS FOR USING OUR PHONEBOOK COMRADE ☭" RESET << std::endl;
			std::cout << RED "PHONEBOOK CLOSED" RESET << std::endl;
			break ;
		}
		else
			std::cout << RED "Invalid command, try again or gulag:" RESET;
	}
	return (0);
}
