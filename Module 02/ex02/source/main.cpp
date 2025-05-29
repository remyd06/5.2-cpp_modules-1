/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:21:20 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 12:32:25 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"


int main(void) 
{
    Fixed       a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed       c(100);
    Fixed       d(158);
    Fixed       result;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    if (c > d)
        std::cout << "c is bigger than d\n";
    else
        std::cout << "d is bigger than c\n";
    
    std::cout << d << std::endl;
    
    result = c + d;
    std::cout << result << std::endl;
    result = c - d;
    std::cout << result << std::endl;
    result = c * d;
    std::cout << result << std::endl;
    result = c / d;
    std::cout << result << std::endl;

    d = 0;
    result = c / d;
    std::cout << result << std::endl;


    return 0;
}
