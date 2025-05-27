/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:48:56 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/07 12:44:29 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	fizz("Fizz");
	FragTrap	buzz("buzz");

	fizz.attack("Romadolf");
	fizz.takeDamage(5);
	fizz.beRepaired(6);
	fizz.takeDamage(0);
	fizz.takeDamage(2);
	fizz.beRepaired(1);
	fizz.beRepaired(1);
	fizz.takeDamage(42);
	fizz.beRepaired(6);
	std::cout << "\n";
	buzz.attack("Flodolph");
	buzz.takeDamage(50);
	buzz.beRepaired(60);
	buzz.takeDamage(0);
	buzz.takeDamage(20);
	buzz.beRepaired(10);
	buzz.beRepaired(10);
	buzz.takeDamage(420);
	buzz.beRepaired(60);
}
