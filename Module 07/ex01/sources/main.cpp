/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:24:35 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/28 10:43:56 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int &x)
{
    std::cout << x << std::endl;
}

void addOne(int &x)
{
	x += 1;
}

void supFive(int &x)
{
	x -= 5;
}

int main()
{
    int arr1[] = {1, 2, 3};
	
    iter(arr1, 3, printInt);
    iter(arr1, 3, addOne);

	std::cout << std::endl;
    iter(arr1, 3, printInt);
	std::cout << std::endl;

    const int arr2[] = {10, 20, 30};

	iter(arr2, 3, printInt);
	// iter(arr2, 3, supFive);

	std::cout << std::endl;
    iter(arr2, 3, printInt);
	std::cout << std::endl;
    return 0;
}
