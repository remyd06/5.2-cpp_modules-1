/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:05:55 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/10 21:29:20 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <climits>
#include <cmath>
#include <cstdlib>

class ScalarConvert
{
	private:
		ScalarConvert();
		~ScalarConvert();

	public:
		static void	convert(const std::string& input);
		

};
