/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:07:22 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:36:19 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal	&operator = (const AAnimal &copy);
		virtual ~AAnimal();
		
		std::string			getType() const;
		virtual void		makeSound() const = 0;

	protected:
		std::string type;
};
