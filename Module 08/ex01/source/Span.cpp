/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 23:23:39 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/30 21:01:15 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	:	_n(1)
{
	std::cout << "Span default constructor called.\n";
}

Span::Span(unsigned int N)
	:	_n(N)
{
	std::cout << "Span constructor called.\n";
}

Span::Span(const Span &copy)
	:	_n(copy._n)
{

}

Span	&Span::operator=(const Span &copy)
{
	this->_n = copy._n;
	return(*this);
}

void	Span::addNumber(int nb)
{
	if (_numbers.size() >= _n)
		throw std::runtime_error("Span is full.");
	_numbers.push_back(nb);
}

int	Span::shortestSpan()
{
	if(_numbers.size() <= 1)
		throw std::runtime_error("No span can be found\n");

    std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 0; i < sorted.size() - 1; ++i)
	{
        int diff = sorted[i + 1] - sorted[i];
        if (diff < minSpan)
            minSpan = diff;
	}
	return (minSpan);
}

int	Span::longestSpan()
{
	if(_numbers.size() <= 1)
		throw std::runtime_error("No span can be found\n");
	
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	
	int min = *std::min_element(sorted.begin(), sorted.end());
	int max = *std::max_element(sorted.begin(), sorted.end());

	return(max - min);
}

Span::~Span()
{
	std::cout << "Span destructor called\n";	
}
