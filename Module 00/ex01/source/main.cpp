/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:54:15 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/16 13:43:19 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string input;

	while (1)
	{
		std::cout << "Enter your command : ";
		if (!std::getline(std::cin, input))
		{
			std::cout << RED "\nCtrl + D, exiting..." RESET << std::endl;
			return (1);
		}
		if (input.empty())
		{
			std::cout << RED "Wrong command" RESET << std::endl;
			continue ;
		}
		Contact;
}
