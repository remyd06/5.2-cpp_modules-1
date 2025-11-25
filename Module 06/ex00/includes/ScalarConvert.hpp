/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 05:59:23 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/17 05:59:23 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>


enum	LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	FLOAT_LITERAL,
	DOUBLE_LITERAL
};

class ScalarConvert
{
	private:
		ScalarConvert();
		ScalarConvert(const ScalarConvert &copy);
		ScalarConvert	operator=(const ScalarConvert &copy);
		~ScalarConvert();

	public:

		static void	convert(const std::string &literal);
};

