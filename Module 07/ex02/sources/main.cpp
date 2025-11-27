/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:46:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/27 12:50:35 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try
	{
		Array<int>			i;
		Array<int>			i1(100);
		Array<std::string>	str(15);
		Array<std::string>	str1(5);
		Array<float>		f(10);
		Array<float>		f1;

		f[0] = 45.45f;
		f1 = f;


		i1[0] = 42;
		str[0] = "Hello World";
		str1[0] = "Bye World";

		Array<std::string>	str2(str1);

		std::cout << str[0] << std::endl;
		std::cout << str1[0] << std::endl;
		std::cout << str2[0] << std::endl;
		std::cout << str1.size() << std::endl;
		std::cout << i1.size() << std::endl;
		std::cout << f1[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<Array<Array<Array<Array<Array<Array<Array<Array<Array<Array<Array<std::string> > > > > > > > > > > > ah;
	std::cout << sizeof(ah) << std::endl;
}
