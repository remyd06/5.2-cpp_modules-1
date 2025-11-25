/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomGeneration.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:42:12 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/25 12:24:14 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

Base*	generate(void)
{
	srand(time(0));
	unsigned int	randNum = rand() % 3;

	if (randNum == 0)
	{
		Base*	base = new A();
		return (base);
	}
	else if (randNum == 1)
	{
		Base*	base = new B();
		return (base);
	}
	else
	{
		Base*	base = new C();
		return (base);
	}
}
