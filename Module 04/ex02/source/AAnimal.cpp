/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:19:45 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:38:03 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal constructor called.\n";
	this->type = "Animal";
}
AAnimal::AAnimal(const AAnimal &copy)
{
	this->type = copy.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	this->type = copy.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal sound\n";
}

std::string AAnimal::getType() const
{
	return type;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called.\n";
}
