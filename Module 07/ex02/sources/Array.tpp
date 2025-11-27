/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:58:03 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/27 12:43:35 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <class T>
Array<T>::Array()
{
	this->_array = 0;
	this->_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_size = n;
}

template <class T>
Array<T>::Array(const Array<T> &copy)
{
	this->_array = new T[copy._size];
	this->_size = copy._size;
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_array[i] = copy._array[i];
}

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	this->_array = new T[copy._size];
	this->_size = copy._size;
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_array[i] = copy._array[i];
	return (*this);
}

template <class T>
T	&Array<T>::operator[](const unsigned int index)
{
	if (index >= this->_size)
		throw (std::length_error("Index overflow"));
	return (this->_array[index]);
}

template <class T>
const T	&Array<T>::operator[](const unsigned int index) const
{
	if (index >= this->_size)
		throw (std::length_error("Index overflow"));
	return (this->_array[index]);
}

template <class T>
size_t	Array<T>::size()
{
	return (this->_size);
}

template <class T>
Array<T>::~Array()
{
	delete[] this->_array;
}
