/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:05:05 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 15:09:39 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
}

Cat	&Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOOOOOOOW\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete this->_brain;
}
