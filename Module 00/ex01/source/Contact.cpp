/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:52:15 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/16 15:13:19 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_firstname = "";
	_lastname = "";
	_nickname = "";
	_phonenumber = "";
	_secret = "";
}
void	Contact::setFirstName(std::string firstName)
{
	_firstname = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	_lastname = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	_nickname = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	_phonenumber = phoneNumber;
}

void	Contact::setSecret(std::string secret)
{
	_secret = secret;
}
