/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:03:59 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:23:57 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat	&operator = (const Cat &copy);
		~Cat();

		void	makeSound() const;
		void	setIdea(unsigned int index, const std::string idea);
		void	getIdea(unsigned int index);

	private:
		Brain* _brain;
};
