/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:44:12 by rdedola           #+#    #+#             */
/*   Updated: 2025/10/21 22:44:12 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main() 
{
	srand(time(NULL));

	Intern	randomInternWithBadIncome;
	AForm*	form1;
	AForm*	form2;
	AForm*	form3;

	std::cout << std::endl;
	form1 = randomInternWithBadIncome.makeForm("robotomy request", "Gary");
	std::cout << std::endl;
	form2 = randomInternWithBadIncome.makeForm("presidential pardon", "Ben");
	std::cout << std::endl;
	form3 = randomInternWithBadIncome.makeForm("unknown", "nobody");
	std::cout << std::endl;
	
	delete (form1);
	delete (form2);
	delete (form3);

	return (0);
}
