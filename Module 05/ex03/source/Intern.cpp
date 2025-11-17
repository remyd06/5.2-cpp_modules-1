/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:21:09 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/12 19:21:09 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern&	Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

AForm*	Intern::makeForm(const std::string nameOfForm, const std::string target)
{
	const std::string	tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	unsigned int		i;

	for (i = 0; i < 3; i++)
	{
		if (tab[i] == nameOfForm)
			break ;
	}

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << nameOfForm << "!" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << nameOfForm << "!" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << nameOfForm << "!" << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cerr << "Intern couldn't create " << nameOfForm << "!" << std::endl;
	}
	return (NULL);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called !" << std::endl;
}
