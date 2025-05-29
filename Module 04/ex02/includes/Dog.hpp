/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:34:03 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:38:09 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog	&operator = (const Dog &copy);
		~Dog();
		
		void	makeSound() const;
		void	setIdea(unsigned int index, const std::string idea);
		void	getIdea(unsigned int index);

	private:
		Brain* _brain;
};
