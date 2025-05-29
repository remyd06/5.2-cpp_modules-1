/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:03:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:05:30 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
    for (unsigned int i = 0; i < 100; i++)
        this->ideas[i] = "Random idea.";
}

Brain::Brain(const Brain &copy)
{
    for (unsigned int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (unsigned int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

void	Brain::setIdea(unsigned int index, const std::string idea)
{
    if (index <= 100 && index >= 0)
        this->ideas[index] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}
