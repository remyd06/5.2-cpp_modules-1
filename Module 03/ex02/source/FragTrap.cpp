/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:47:50 by rdedola           #+#    #+#             */
/*   Updated: 2025/04/07 12:17:00 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag constructor called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage! Sooo cool\n";
	}
	else
	{
		std::cout << "No energy left for attacking !\n";
	}
}

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " ask for an Hive-Five !\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called.\n";
}
