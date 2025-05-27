/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:18:13 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/03 16:13:05 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Clap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!\n";
	}
	else
	{
		std::cout << "No energy left for attacking !\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "This attack is ridiculous ! No damage.\n";
	}
	else if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " of damage ! He's definitly dead !\n";
	}
	else if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " of damage !\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Bro, i'm dead ! Leave me alone !\n";
		return ;
	}
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		if (amount > (10 - this->_hitPoints))
		{
			this->_hitPoints = 10;
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

ClapTrap::~ClapTrap()
{
	std::cout << "Clap destructor called.\n";
}
