/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:59:25 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/14 18:25:43 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <cstddef>
#include <cstdlib>
#include <stdexcept>
#include <iostream>

template<typename T>
class Array
{
	private:
		T*				_data;
		unsigned int	_size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
	
		unsigned int size() const throw();
};

#include "../src/Array.tpp"

#endif
