/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:41:10 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/11 15:41:10 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:	AForm::AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "Unknown target";
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	:	AForm::AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
:	AForm(copy)
{
	this->_target = copy._target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	this->_target = copy._target;
	return (*this);
}

void	PresidentialPardonForm::doAction() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardon destructor called !" << std::endl;
}
