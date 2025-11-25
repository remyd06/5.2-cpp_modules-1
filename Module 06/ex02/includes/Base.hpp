/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:35:40 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/25 12:21:18 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class	Base
{
	private:
		
	public:
		virtual	~Base() {};
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
