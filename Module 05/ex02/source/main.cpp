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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main() 
{
	srand(time(NULL));

	try 
	{
		Bureaucrat boss("Boss", 137);
		Bureaucrat bob("bob", 144);
		Bureaucrat linda("linda", 45);
		Bureaucrat president("president", 1);
		Bureaucrat mafioso("mafioso", 150);

		ShrubberyCreationForm	form1("garden");
		RobotomyRequestForm		form2("linda");
		PresidentialPardonForm	form3("mafiso");

		std::cout << "\n";
		std::cout << "\n";


		boss.executeForm(form1);
		boss.signForm(form1);
		boss.executeForm(form1);

		std::cout << "\n";
		std::cout << "\n";

		linda.executeForm(form2);
		linda.signForm(form2);
		linda.signForm(form2);
		linda.executeForm(form2);
		linda.executeForm(form2);

		std::cout << "\n";
		std::cout << "\n";

		president.executeForm(form3);
		president.signForm(form3);
		president.signForm(form3);
		president.executeForm(form3);

		std::cout << "\n";
		std::cout << "\n";

		mafioso.executeForm(form3);
		mafioso.signForm(form3);
		mafioso.signForm(form3);
		mafioso.executeForm(form3);

		std::cout << "\n";
		std::cout << "\n";

	} 
	catch (std::exception &e) 
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	return (0);
}
