/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:03:44 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/22 15:43:45 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

// Setters
void	Contact::setFirstName(std::string firstName)
{
	this->_first_name = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_last_name = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)\
{
	this->_phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkest_secret = darkestSecret;
}

//Getters
std::string Contact::getFirstName()
{
	return _first_name;
}

std::string Contact::getLastName()
{
	return _last_name;
}

std::string Contact::getNickname()
{
	return _nickname;
}

std::string Contact::getPhoneNumber()
{
	return _phone_number;
}

std::string Contact::getDarkestSecret()
{
	return _darkest_secret;
}
