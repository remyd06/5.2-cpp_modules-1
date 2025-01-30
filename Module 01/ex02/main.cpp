/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:36:44 by rdedola           #+#    #+#             */
/*   Updated: 2025/01/30 01:36:44 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "String = " << str << std::endl;
    std::cout << "String PTR = " << stringPTR << std::endl;
    std::cout << "String REF = " << &stringREF << std::endl;

    return (0);
}