/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:07:22 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/27 15:06:38 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal	&operator = (const Animal &copy);
		virtual ~Animal();
		
		std::string			getType() const;
		virtual void		makeSound() const;

	protected:
		std::string type;
};
