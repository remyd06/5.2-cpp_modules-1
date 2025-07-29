/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:23:28 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/28 11:37:41 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {

    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "=== Test with vector<int> ===" << std::endl;

    try
	{
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found: " << *it << std::endl;
    } 
	catch (std::exception &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
	{
        std::vector<int>::iterator it = easyfind(vec, 99);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    std::cout << "\n=== Test with list<int> ===" << std::endl;

    try
	{
        std::list<int>::iterator it = easyfind(lst, 2);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
	{
        std::list<int>::iterator it = easyfind(lst, 42);
        std::cout << "Found: " << *it << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
