/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 09:55:01 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/28 10:26:32 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstddef>

template <typename T, typename F>
void	iter(T *array, size_t len, F func)
{
	for(size_t i = 0; i < len; ++i)
		func(array[i]);
}
