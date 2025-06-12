/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:41:28 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 17:46:50 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename Data>
void	iter(Data *array, size_t lenght, void (*function)(Data &))
{
	for (size_t i = 0; i < lenght; i++)
		function(array[i]);
}

template <typename Data>
void printElement(Data &element)
{
	element += 10;
	std::cout << element << std::endl;
}

#endif
