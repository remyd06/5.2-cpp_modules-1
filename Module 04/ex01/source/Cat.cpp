/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:05:05 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:23:50 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
}

Cat	&Cat::operator=(const Cat &copy)
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

void	Cat::makeSound() const
{
	std::cout << "MEOOOOOOOW\n";
}

void	Cat::setIdea(unsigned int index, const std::string idea)
{
	if (index <= 100 && index >= 0)
        this->_brain->ideas[index] = idea;
}

void	Cat::getIdea(unsigned int index)
{
	if (index <= 100 && index >= 0)
		std::cout << this->_brain->ideas[index] << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete this->_brain;
}
