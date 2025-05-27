/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:21:14 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/28 19:21:14 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor called\n";
}
void    Zombie::setName( std::string newName )
{
	this->_name = newName;
}

void    Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed !" << std::endl;
}
