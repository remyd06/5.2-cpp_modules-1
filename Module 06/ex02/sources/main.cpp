/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:35:08 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/25 12:24:28 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "D.hpp"

int	main()
{
	Base*	base = generate();
	Base*	damn = new D;

	identify(base);
	identify(*base);
	delete base;

	identify(damn);
	identify(*damn);
	delete damn;
	
	return (0);
}
