/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:03:51 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/22 16:00:30 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_nb_contact = 0;
	_index = 0;
}
void	PhoneBook::printContact(int index)
{
	std::cout << std::endl;
	std::cout << "INDEX " << ITALIC << index << RESET << std::endl;
	std::cout << "First Name: " << ITALIC << _contacts[index].getFirstName() << RESET << std::endl;
	std::cout << "Last Name: " << ITALIC << _contacts[index].getLastName() << RESET << std::endl;
	std::cout << "Nickname: " << ITALIC << _contacts[index].getNickname()<< RESET << std::endl;
	std::cout << "Phone Number: " << ITALIC << _contacts[index].getPhoneNumber() << RESET << std::endl;
	std::cout << "Darkest Secret: " << ITALIC << _contacts[index].getDarkestSecret() << RESET << std::endl;
}

bool	PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret; 

	std::cout << std::endl << "You selected " << BOLD "ADD CONTACT" RESET << std::endl;

	
	while (1)
	{
		std::cout << "Enter " << ITALIC << "FIRST NAME" RESET << ": ";
		if (!std::getline(std::cin, firstName))
			return (false);
		if (firstName.empty())
		{
			std::cout << RED "EMPTY LINE, try again." RESET << std::endl;
			continue ;
		}
		break ;
	}

	while (1)
	{
		std::cout << "Enter " << ITALIC << "LAST NAME" RESET << ": ";
		if (!std::getline(std::cin, lastName))
			return (false);
		if (lastName.empty())
		{
			std::cout << RED "EMPTY LINE, try again." RESET << std::endl;
			continue ;
		}
		break ;
	}

	while (1)
	{
		std::cout << "Enter " << ITALIC << "NICKNAME" RESET << ": ";
		if (!std::getline(std::cin, nickname))
			return (false);
		if (nickname.empty())
		{
			std::cout << RED "EMPTY LINE, try again." RESET << std::endl;
			continue ;
		}
		break ;
	}

	while (1)
	{
		std::cout << "Enter " << ITALIC << "PHONE NUMBER" RESET << ": ";
		if (!std::getline(std::cin, phoneNumber))
			return (false);
		if (phoneNumber.empty())
		{
			std::cout << RED "EMPTY LINE, try again." RESET << std::endl;
			continue ;
		}
		break ;
	}
	
	while (1)
	{
		std::cout << "Enter " << ITALIC << "DARKEST SECRET" RESET << ": ";
		if (!std::getline(std::cin, darkestSecret))
			return (false);
		if (darkestSecret.empty())
		{
			std::cout << RED "EMPTY LINE, try again." RESET << std::endl;
			continue ;
		}
		break ;
	}
	
	_contacts[_index].setFirstName(firstName);
	_contacts[_index].setLastName(lastName);
	_contacts[_index].setNickname(nickname);
	_contacts[_index].setPhoneNumber(phoneNumber);
	_contacts[_index].setDarkestSecret(darkestSecret);
	std::cout << GREEN << ITALIC << firstName << " " << lastName << RESET << GREEN " Successfully Added!" RESET << std::endl;
	
	if (_index == 7)
		_index = 0;
	else
		_index++;
	if (_nb_contact < 8)
		_nb_contact++;

	return (true);
}
std::string truncate(std::string str)
{
	if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

bool	PhoneBook::searchContact()
{
	int				count = 0;
	int				index;
	std::string		command;

	if (_nb_contact == 0)
	{
		std::cout << std::endl << RED "No Contact found in your phonebook" RESET << std::endl;
		return (true);
	}

	std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║     INDEX║ FIRSTNAME║  LASTNAME║  NICKNAME║" << std::endl;
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
	for (int i = 0; i < _nb_contact; i++, count++)
	{
		std::cout << "║" << std::setw(10) << count << "║"
        		  << std::setw(10) << truncate(_contacts[count].getFirstName()) << "║"
        		  << std::setw(10) << truncate(_contacts[count].getLastName()) << "║"
        		  << std::setw(10) << truncate(_contacts[count].getNickname()) << "║" << std::endl;
	}
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
	while (1)
	{
		std::cout << "Enter the " << ITALIC << "INDEX" << RESET << std::endl;
		if (!std::getline(std::cin, command))
			return (false);
		if (command.empty())
		{
			std::cout << RED "EMPTY LINE, try again:" RESET << std::endl;
			continue ;
		}
		if (command.length() > 1)
		{
			std::cout << RED "ID needs to be one character, try again:" RESET << std::endl;
			continue ;
		}
		if (!std::isdigit(command[0]))
		{
			std::cout << RED "The index must be a number, try again:" RESET << std::endl;
			continue ;
		}
		index = command[0] - '0';
		if (index >= _nb_contact)
		{
			std::cout << RED "You don't have more than " << ITALIC << _nb_contact  << RESET << RED " contacts" RESET << std::endl;
			continue ;
		}
		printContact(index);
		break ;
	}
	return (true);
}
