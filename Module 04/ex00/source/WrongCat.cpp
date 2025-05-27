/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:25:05 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 14:42:05 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Wrong cat constructor called\n";
	this->type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Perlinpinpin\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called\n";
}
