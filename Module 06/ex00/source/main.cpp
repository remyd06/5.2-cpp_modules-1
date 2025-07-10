/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:26:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/10 21:28:45 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main() 
{
    std::string tests[] =
	{
        "a",
        "0",
        "42",
        "-42",
        "4.2f",
        "-4.2f",
        "4.2",
        "-4.2",
        "nanf",
        "+inff",
        "-inff",
        "nan",
        "+inf",
        "-inf",
        "abc",
        "123abc",
        ".",
        "f"
    };

    const size_t size = sizeof(tests) / sizeof(tests[0]);

    for (size_t i = 0; i < size; ++i)
	{
        std::cout << "Input: \"" << tests[i] << "\"" << std::endl;
        ScalarConvert::convert(tests[i]);
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}
