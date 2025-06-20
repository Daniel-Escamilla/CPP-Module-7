/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:22:30 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/14 19:03:03 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_data = NULL;
	_size = 0;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_data = new T[_size];
}

template<typename T>
Array<T>::Array(const Array& copy)
{
	_size = copy._size;
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = copy._data[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this != &copy)
	{
		_size = copy._size;
		delete[] _data;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = copy._data[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template<typename T>
unsigned int Array<T>::size() const throw()
{
	return _size;
}