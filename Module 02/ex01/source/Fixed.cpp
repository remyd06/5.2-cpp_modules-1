/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:21:42 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 12:38:07 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
	:	_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
	:	_number(nbr << this->_number_bits_fraction)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float flt)
	:	_number(roundf(flt * (1 << this->_number_bits_fraction)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
	:	_number(copy._number)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed			&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = other._number;
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

float	Fixed::toFloat() const
{
	return ((float)this->_number / (1 << this->_number_bits_fraction));
}

int		Fixed::toInt() const
{
	return (this->_number >> this->_number_bits_fraction);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
