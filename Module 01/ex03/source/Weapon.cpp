/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:53:41 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/30 01:53:41 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

Weapon::Weapon( std::string weaponType)
{
    this->_type = weaponType;
}

void    Weapon::setType( std::string setType )
{
    this->_type = setType;
}

const std::string& Weapon::getType()
{
    return (this->_type);
}