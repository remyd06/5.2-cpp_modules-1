/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:55:02 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/10 21:58:47 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data d = {"My house"};
	Data* originalPtr = &d;

	uintptr_t raw = Serializer::serialize(originalPtr);
    std::cout << "Adress converted in int : " << raw << std::endl;

	Data* recoveredPtr = Serializer::deserialize(raw);

	if (recoveredPtr == originalPtr) {
        std::cout << "Pointer succes !" << std::endl;
        std::cout << "Data.message = " << recoveredPtr->message << std::endl;
    } else {
        std::cout << "Error, pointer different." << std::endl;
    }

	return (0);
}
