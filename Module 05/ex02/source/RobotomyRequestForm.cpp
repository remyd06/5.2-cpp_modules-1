/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:21:32 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/11 15:21:32 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	:	AForm::AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Unknown target";
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	:	AForm::AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm constructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
:	AForm(copy)
{
	this->_target = copy._target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	this->_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::doAction() const
{
	int	nb = rand()% 100 + 1;

	std::cout << "Robotomization in progress..." << std::endl;
	if (nb >= 50)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << this->_target << " has failed his robotomization ..." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called !" <<std::endl;
}