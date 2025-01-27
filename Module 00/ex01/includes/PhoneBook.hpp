/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:47:59 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/16 15:20:14 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

# define RED "\e[1;31m"
#define RESET "\e[0m"

class	PhoneBook
{
	public:
		PhoneBook();
	private:
		Contact _contact[8];
		int		_index;
		int		_nb_of_contact;
};

#endif
