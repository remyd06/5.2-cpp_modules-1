/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:47:50 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/21 15:45:19 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scav constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage! Sooo cool\n";
	}
	else
	{
		std::cout << "No energy left for attacking !\n";
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Bro, i'm dead ! Leave me alone !\n";
		return ;
	}
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		if (amount > (100 - this->_hitPoints))
		{
			this->_hitPoints = 100;
			std::cout << this->_name << " repaired " << amount << " life points, 100% repaired !\n";
		}
		else
		{
			this->_hitPoints += amount;
			std::cout << this->_name << " repaired " << amount << " life points !\n";
		}
	}
	else
	{
		std::cout << "No energy left for be repaired !\n";
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in guard mode !\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called.\n";
}
