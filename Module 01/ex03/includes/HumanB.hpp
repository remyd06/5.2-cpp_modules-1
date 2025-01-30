/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:52:58 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/30 01:52:58 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB( std::string name ) : _name(name) {}

    void    setWeapon(Weapon &setWeapon);
    void    attack();
};

#endif