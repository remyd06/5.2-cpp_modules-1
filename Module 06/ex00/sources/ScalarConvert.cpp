/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 06:03:39 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/17 06:03:39 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert()
{
	std::cout << "Default constrcutor called." << std::endl;
}

ScalarConvert::ScalarConvert(const ScalarConvert &copy)
{
	(void)copy;
}

ScalarConvert	ScalarConvert::operator=(const ScalarConvert &copy)
{
	(void)copy;
	return (*this);
}

ScalarConvert::~ScalarConvert()
{
	std::cout << "Destructor called" << std::endl;
}

bool	isInt(const std::string &literal)
{
	unsigned int 	i = 0;
	if (literal[0] == '-')
		i++;
	while (std::isdigit(literal[i]))
		i++;
	if (literal[i] == '\0')
		return (true);
	else
		return (false);
}

bool	isFloat(const std::string &literal)
{
	unsigned int	dotCount = 0;
	unsigned int	fCount = 0;
	for (unsigned int i = 0; i < literal.size(); ++i)
	{
		if (literal[i] == '.')
			dotCount++;
		else if (literal[i] == 'f')
			fCount++;
	}
	if (dotCount > 1 || fCount > 1)
		return (false);
		
	unsigned int	dotIndex = literal.find('.', 0);	
	unsigned int	fIndex = literal.find('f', 0);
	unsigned int	endIndex = literal.size() - 1;
	if (literal[0] == '-')
	{
		if (dotIndex == 1 || dotIndex == endIndex || fIndex != endIndex)
			return (false);
	}
	else if (dotIndex == 0 || dotIndex == endIndex || fIndex != endIndex)
			return (false);
	for (unsigned int i = 0; i < literal.size() - 1; ++i)
	{
		if (literal[0] == '-')
			i++;
		if (literal[i] == '.')
			i++;
		else if (std::isdigit(literal[i]))
			i++;
		else
			return (false);
	}
	return (true);
}

bool	isDouble(const std::string &literal)
{
	unsigned int	dotCount = 0;
	for (unsigned int i = 0; i < literal.size(); ++i)
	{
		if (literal[i] == '.')
			dotCount++;
	}
	if (dotCount > 1)
		return (false);
		
	unsigned int	dotIndex = literal.find('.', 0);	
	unsigned int	endIndex = literal.size() - 1;
	if (literal[0] == '-')
	{
		if (dotIndex == 1 || dotIndex == endIndex)
			return (false);
	}
	else if (dotIndex == 0 || dotIndex == endIndex)
			return (false);
	for (unsigned int i = 0; i < literal.size(); ++i)
	{
		if (literal[0] == '-')
			i++;
		if (literal[i] == '.')
			i++;
		else if (std::isdigit(literal[i]))
			i++;
		else
			return (false);
	}
	return (true);
}

bool	isFLoatLiteral(const std::string &literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (true);
	return (false);
}

bool	isDoubleLiteral(const std::string &literal)
{
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
	return (false);
}

LiteralType	detectType(const std::string &literal)
{
	if (literal.length() == 1 && std::isalpha(literal[0]))
		return (CHAR);
	else if (isInt(literal))
		return (INT);
	else if (isFloat(literal))
		return (FLOAT);
	else if (isDouble(literal))
		return (DOUBLE);
	else if (isFLoatLiteral(literal))
		return (FLOAT_LITERAL);
	else if (isDoubleLiteral(literal))
		return (DOUBLE_LITERAL);
	else
		throw (std::runtime_error("Wrong input."));

}

void	convertChar(const std::string &literal)
{	
	std::cout << "char: " << literal << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << std::endl;
}

void	convertInt(const std::string &literal)
{
	if (atoi(literal.c_str()) >= 33 && atoi(literal.c_str()) <= 126)
		std::cout << "char: " << static_cast<char>(atoi(literal.c_str())) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << literal << std::endl;
	std::cout << "float: " << static_cast<float>(atoi(literal.c_str())) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(atoi(literal.c_str())) << std::endl;
}

void	convertFloat(const std::string &literal)
{
	if (atoi(literal.c_str()) >= 33 && atoi(literal.c_str()) <= 126)
		std::cout << "char: " << static_cast<char>(atoi(literal.c_str())) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(atoi(literal.c_str())) << std::endl;
	std::cout << "float: " << literal << std::endl;
	std::cout << "double: " << static_cast<double>(atof(literal.c_str())) << std::endl;
}

void	convertDouble(const std::string &literal)
{
	if (atoi(literal.c_str()) >= 33 && atoi(literal.c_str()) <= 126)
		std::cout << "char: " << static_cast<char>(atoi(literal.c_str())) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(atoi(literal.c_str())) << std::endl;
	std::cout << "float: " << static_cast<float>(atof(literal.c_str())) << "f" << std::endl;
	std::cout << "double: " << literal << std::endl;
}

void	convertFloatLiteral(const std::string &literal)
{
	unsigned int res = 0;
	if (literal == "nanf")
		res = 1;
	else if (literal == "+inff")
		res = 2;
	else
		res = 3;

	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << literal << std::endl;

	switch(res)
	{
		case 1:
			std::cout << "double: " << "nan" << std::endl;
			break ;
		case 2:
			std::cout << "double: " << "+inf" << std::endl;
			break ;
		case 3:
			std::cout << "double: " << "-inf" << std::endl;
			break ;
	}
}

void	convertDoubleLiteral(const std::string &literal)
{
	unsigned int res = 0;
	if (literal == "nan")
		res = 1;
	else if (literal == "+inf")
		res = 2;
	else
		res = 3;

	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	switch(res)
	{
		case 1:
			std::cout << "float: " << "nanf" << std::endl;
			break ;
		case 2:
			std::cout << "float: " << "+inff" << std::endl;
			break ;
		case 3:
			std::cout << "float: " << "-inff" << std::endl;
			break ;
	}
	std::cout << "double: " << literal << std::endl;

}

void	ScalarConvert::convert(const std::string &literal)
{
	LiteralType type = detectType(literal);
	std::cout << std::fixed << std::setprecision(1);
	
	if (type == CHAR)
		convertChar(literal);
	else if (type == INT)
		convertInt(literal);
	else if (type == FLOAT)
		convertFloat(literal);
	else if (type == DOUBLE)
		convertDouble(literal);
	else if (type == FLOAT_LITERAL)
		convertFloatLiteral(literal);
	else
		convertDoubleLiteral(literal);
}