/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:52:48 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/30 01:52:48 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {}

    void    attack();
};

#endif