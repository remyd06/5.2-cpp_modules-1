/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:03:56 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/29 13:02:52 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator = (const Brain &copy);
		std::string ideas[100];
		~Brain();

		void	setIdea(unsigned int index, const std::string idea);
};
