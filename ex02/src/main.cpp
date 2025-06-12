/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:59:29 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 18:31:31 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template<typename T>
Array<T>::Array(unsigned int n)
{
	array = new T[n];
}

template<typename T>
Array<T>::Array(const Array& copy)
{

}

template<typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	
}

template<typename T>
T& Array<T>::operator[](std::size_t index)
{

}

template<typename T>
T& const Array<T>::operator[](size_t index) const
{
	
}

template<typename T>
size_t Array<T>::size() const throw()
{
	
}