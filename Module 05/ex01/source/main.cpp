/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:39:18 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/06 21:17:36 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		std::cout << "=== Bureacrates creation. ===\n";
		Bureaucrat alice("Alice", 2);
		Bureaucrat bob("Bob", 140);
		Bureaucrat eve("Eve", 75);

		std::cout << alice << std::endl;
		std::cout << bob << std::endl;
		std::cout << eve << std::endl;

		std::cout << "\n=== Form Creation ===\n";
		Form topSecret("TopSecret", 2, 1);
		Form mediumForm("MediumForm", 80, 50);
		Form easyForm("EasyForm", 150, 150);

		std::cout << topSecret;
		std::cout << mediumForm;
		std::cout << easyForm;

		std::cout << "\n=== Test 1 : Bob try to sign TopSecret ===\n";
		bob.signForm(topSecret);

		std::cout << "\n=== Test 2 : Alice sign TopSecret ===\n";
		alice.signForm(topSecret);

		std::cout << "\n=== Test 3 : Alice try to sign again ===\n";
		alice.signForm(topSecret); 

		std::cout << "\n=== Test 4 : Eve Sign MediumForm ===\n";
		eve.signForm(mediumForm);

		std::cout << "\n=== Test 5 : Bob Sign EasyForm ===\n";
		bob.signForm(easyForm);

		std::cout << "\n=== Finals Form ===\n";
		std::cout << topSecret;
		std::cout << mediumForm;
		std::cout << easyForm;
	}
	catch (std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}

	return 0;
}
