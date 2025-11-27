/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:48:00 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/27 12:09:02 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <class T>
class	Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &copy);
		Array	&operator=(const Array<T> &copy);
		T		&operator[](const unsigned int index);
		const T	&operator[](const unsigned int index) const;
		~Array();

		size_t	size();

	private:
		T*				_array;
		unsigned int	_size;

};

#include "../sources/Array.tpp"
