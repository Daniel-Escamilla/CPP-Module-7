/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:04:52 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 17:12:44 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef whatever_HPP
# define whatever_HPP

#include <iostream>

template <typename Data>
Data max(Data x, Data y)
{
    if (x > y)
		return (x);
	return (y);
}

template <typename Data>
Data min(Data x, Data y)
{
    if (x < y)
		return (x);
	return (y);
}

template <typename Data>
void swap(Data& x, Data &y)
{
	Data tmp = x;
	x = y;
	y = tmp;
}

#endif
