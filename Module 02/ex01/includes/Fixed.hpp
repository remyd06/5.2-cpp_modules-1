/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:21:32 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/02 14:16:28 by rdedola          ###   ########.fr       */
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

		float	toFloat() const;
		int		toInt() const;

	private:
		int					_number;
		static const int	_number_bits_fraction = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

