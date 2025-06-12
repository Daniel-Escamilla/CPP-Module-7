/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:59:25 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 18:30:35 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <cstddef>

template<typename T>
class Array
{
	private:
		T*		data;
		size_t	size;
	public:
		Array() {};
		~Array() {};
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);

		T& operator[](size_t index);
		T& const operator[](size_t index) const;
	
		size_t size() const throw();
};

#endif
