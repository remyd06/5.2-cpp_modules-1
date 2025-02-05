/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:03:13 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/22 15:44:18 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

#include "Contact.hpp"

# define ITALIC		"\e[3m"
# define BOLD		"\e[1m"
# define GREEN		"\e[32m"
# define RED		"\e[31m"
# define RESET		"\e[0m"

class PhoneBook
{
private:
	Contact		_contacts[8];
	int			_nb_contact;
	int			_index;
public:
	//Constructor
	PhoneBook();
	
	//Methods
	bool	addContact();
	bool	searchContact();
	void	printContact(int index);
};

#endif
