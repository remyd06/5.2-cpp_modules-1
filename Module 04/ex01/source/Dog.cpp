/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:35:26 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 15:09:33 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete this->_brain;
}
