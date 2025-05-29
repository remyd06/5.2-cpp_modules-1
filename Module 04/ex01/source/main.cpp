/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:58:13 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:30:20 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* tab[100];
	Dog*			Valya;

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

	std::cout << std::endl;
	
	Valya = new Dog();
	Valya->setIdea(50, "Tout detruire!");
	Valya->getIdea(50);
	Valya->setIdea(50, "Aimer papa");
	Valya->getIdea(50);

	Dog*	toutou;

	toutou = new Dog(*Valya);
	toutou->getIdea(50);

	delete toutou;
	delete Valya;

	return (0);

}
