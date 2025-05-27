/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:48:56 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/03 13:22:57 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	fizz("Fizz");
	ClapTrap	fozz(fizz);

	fizz.attack("Romadolf");
	fizz.takeDamage(5);
	fizz.beRepaired(6);
	fizz.takeDamage(0);
	fizz.takeDamage(2);
	fizz.beRepaired(1);
	fizz.beRepaired(1);
	fizz.takeDamage(42);
	fizz.beRepaired(6);
}
