/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:44:33 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/07 12:09:47 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator = (const FragTrap &copy);
		void		attack(const std::string& target);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);;
		~FragTrap();
};
