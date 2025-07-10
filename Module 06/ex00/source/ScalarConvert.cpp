/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:18:15 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/10 21:35:40 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

#include <string>
#include <cctype>

enum LiteralType
{
	TYPE_CHAR,
	TYPE_INT,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_PSEUDO_FLOAT,
	TYPE_PSEUDO_DOUBLE,
	TYPE_UNKNOWN
};

bool isDigitStr(const std::string& str) {
	for (size_t i = 0; i < str.length(); ++i) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

LiteralType detectType(const std::string &literal)
{
	if (literal.empty() || literal == "+" || literal == "-")
		return TYPE_UNKNOWN;

	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return TYPE_CHAR;

	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return TYPE_PSEUDO_FLOAT;

	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return TYPE_PSEUDO_DOUBLE;

	size_t i = 0;
	if (literal[i] == '-' || literal[i] == '+') i++;

	bool isInt = true;
	for (; i < literal.length(); ++i)
	{
		if (!std::isdigit(literal[i]))
		{
			isInt = false;
			break;
		}
	}
	if (isInt)
		return TYPE_INT;

	if (literal[literal.length() - 1] == 'f')
	{
		size_t dot = literal.find('.');
		if (dot != std::string::npos)
			return TYPE_FLOAT;
	}

	if (literal.find('.') != std::string::npos &&
		literal.find('f') == std::string::npos)
		return TYPE_DOUBLE;

	return TYPE_UNKNOWN;
}

void	convertFromChar(const std::string& input)
{
	char c = input[0];

	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);

	if (std::isprint(c))
	    std::cout << "char: '" << c << "'" << std::endl;
	else
	    std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	convertFromInt(const std::string& input)
{
	int i = std::atoi(input.c_str());

	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	if (i >= 0 && i <= 127)
	{
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
	else
        std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;

}

void	convertFromFloat(const std::string& input)
{
	float f = std::atof(input.c_str());

	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);

	if (f >= 0 && f <= 127)
	{
    	if (std::isprint(c))
        	std::cout << "char: '" << c << "'" << std::endl;
    	else
       		std::cout << "char: Non displayable" << std::endl;
	}
	else
    std::cout << "char: impossible" << std::endl;

std::cout << "int: " << i << std::endl;
std::cout << "float: " << f << "f" << std::endl;
std::cout << "double: " << d << std::endl;
}

void	convertFromDouble(const std::string& input)
{
	double d = std::atof(input.c_str());

	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);

if (d >= 0 && d <= 127)
{
    if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
} 
else 
    std::cout << "char: impossible" << std::endl;

std::cout << "int: ";
if (d < static_cast<double>(i) || d > static_cast<double>(INT_MAX) || std::isnan(d))
    std::cout << "impossible" << std::endl;
else
    std::cout << i << std::endl;

std::cout << "float: " << f << "f" << std::endl;
std::cout << "double: " << d << std::endl;
}

void convertFromPseudoFloat(const std::string &input)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << input << std::endl;
    std::string double_input = input.substr(0, input.length() - 1);
    std::cout << "double: " << double_input << std::endl;
}

void convertFromPseudoDouble(const std::string &input)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if (input == "nan")
        std::cout << "float: nanf" << std::endl;
    else if (input == "+inf")
        std::cout << "float: +inff" << std::endl;
    else if (input == "-inf")
        std::cout << "float: -inff" << std::endl;

    std::cout << "double: " << input << std::endl;
}

void convertFromUnknown(const std::string& input)
{
    (void)input;

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}


void ScalarConvert::convert(const std::string& input)
{
	if (detectType(input) == TYPE_CHAR)
		convertFromChar(input);
	else if (detectType(input) == TYPE_INT)
		convertFromInt(input);
	else if (detectType(input) == TYPE_INT)
		convertFromInt(input);
	else if (detectType(input) == TYPE_FLOAT)
		convertFromFloat(input);
	else if (detectType(input) == TYPE_DOUBLE)
		convertFromDouble(input);
	else if (detectType(input) == TYPE_PSEUDO_FLOAT)
		convertFromPseudoFloat(input);
	else if (detectType(input) == TYPE_PSEUDO_DOUBLE)
		convertFromPseudoDouble(input);
	else if (detectType(input) == TYPE_UNKNOWN)
		convertFromUnknown(input);
}
