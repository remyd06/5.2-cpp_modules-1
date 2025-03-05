/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:21:42 by rdedola           #+#    #+#             */
/*   Updated: 2025/03/05 10:13:27 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
	:	_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
	:	_nb(copy._nb)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = op._nb;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_nb);
}

void	Fixed::setRawBits(const int raw)
{
	this->_nb = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
