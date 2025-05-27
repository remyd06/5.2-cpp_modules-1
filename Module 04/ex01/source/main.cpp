/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:58:13 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 15:18:59 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* tab[100];

	for (unsigned int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	for (unsigned int i = 0; i < 100; i++)
	{
		delete tab[i];
	}
	return (0);
}
