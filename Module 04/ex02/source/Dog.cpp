/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:35:26 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:23:42 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*copy._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK\n";
}

void	Dog::setIdea(unsigned int index, const std::string idea)
{
	if (index <= 100 && index >= 0)
        this->_brain->ideas[index] = idea;
}

void	Dog::getIdea(unsigned int index)
{
	if (index <= 100 && index >= 0)
		std::cout << this->_brain->ideas[index] << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete this->_brain;
}
