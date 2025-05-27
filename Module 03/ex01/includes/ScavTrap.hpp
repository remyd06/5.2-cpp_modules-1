/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:44:33 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/03 16:15:05 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator = (const ScavTrap &copy);
		void		attack(const std::string& target);
		void		beRepaired(unsigned int amount);
		void		guardGate();
		~ScavTrap();
};
