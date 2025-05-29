/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:21:32 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 12:09:51 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	public:
    
		Fixed();
		Fixed(const int nbr);
		Fixed(const float flt);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &other);
		~Fixed();

		bool	operator>(const Fixed &other) const {return this->_number > other._number;}
		bool	operator<(const Fixed &other) const {return this->_number < other._number;}
		bool	operator>=(const Fixed &other) const {return this->_number >= other._number;}
		bool	operator<=(const Fixed &other) const {return this->_number <= other._number;}
		bool	operator==(const Fixed &other) const {return this->_number == other._number;}
		bool	operator!=(const Fixed &other) const {return this->_number != other._number;}

		Fixed	operator+(const Fixed &other) const {return Fixed(this->toFloat() + other.toFloat());}
		Fixed	operator-(const Fixed &other) const {return Fixed(this->toFloat() - other.toFloat());}
		Fixed	operator*(const Fixed &other) const {return Fixed(this->toFloat() * other.toFloat());}
		Fixed	operator/(const Fixed &other) const {return Fixed(this->toFloat() / other.toFloat());}

		Fixed	&operator++() {this->_number += 1; return (*this);}
		Fixed	operator++(int) {Fixed temp = *this; _number += 1; return (temp);}
		Fixed	&operator--() {this->_number -= 1; return (*this);}
		Fixed	operator--(int) {Fixed temp = *this; _number -= 1; return (temp);}

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		float	toFloat() const;
		int		toInt() const;


	private:
		int					_number;
		static const int	_number_bits_fraction = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
