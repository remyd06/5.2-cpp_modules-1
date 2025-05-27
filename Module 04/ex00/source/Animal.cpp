/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:19:45 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 13:51:01 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called.\n";
	this->type = "Animal";
}
Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
}

Animal	&Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called.\n";
}
