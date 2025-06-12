/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:29:28 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 17:50:37 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main()
{
	int	array[7] = {12, 42, 54, 76, 1, 9, 6};
	size_t	lenght = 7;
	
	iter(array, lenght, printElement<int>);

	std::cout << "----------------" << std::endl;

	iter(array, lenght, printElement<int>);

	std::cout << "----------------" << std::endl;

	iter(array, lenght, printElement<int>);
	
	return (0);
}