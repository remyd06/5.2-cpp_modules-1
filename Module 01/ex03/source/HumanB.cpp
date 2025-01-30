/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:53:27 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/30 01:53:27 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::attack()
{
    if (_weapon)
        std::cout << this->_name << " attack with " << _weapon->getType() << std::endl;
    else
        std::cout << this->_name << " have no weapon." << std::endl;
}

void    HumanB::setWeapon( Weapon &setWeapon )
{
    this->_weapon = &setWeapon;
}