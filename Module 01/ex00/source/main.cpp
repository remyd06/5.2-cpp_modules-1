/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:36:29 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/27 10:36:33 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	Zombie* Zombie1 = newZombie("Frank");
	Zombie1->announce();
	delete Zombie1;

	randomChump("Giu");
	return (0);
}
