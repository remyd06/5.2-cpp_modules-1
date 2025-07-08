/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:25:09 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:38:06 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	:	AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	std::cout << "Robotomy constructor called !\n";
}

void	RobotomyRequestForm::doAction() const
{
	std::srand(std::time(NULL));
	std::cout << "Brrr Brrr, robotomisation attempt in progress...\n";
	if (std::rand() % 2 == 0) {
        std::cout << "Succes : " << this->target << "has been robotomized." << std::endl;
    } else {
        std::cout << "Failure : " << this->target << "hasn't been robotomized." << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called !\n";
}
