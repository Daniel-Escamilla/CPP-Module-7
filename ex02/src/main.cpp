/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:59:29 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/14 18:22:21 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

#define MAX_VAL 750

int main()
{
    try
	{
        Array<int> numbers(MAX_VAL);
        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i * 2;
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;
        for (unsigned int i = 0; i < numbers.size(); i++)
		{
            if (numbers[i] != static_cast<int>(i * 2))
			{
                std::cerr << "Error en operador[] o constructor con tamaño" << std::endl;
                return 1;
            }
        }
        Array<int> copyArray(numbers);
        copyArray[0] = 9999;
		if (numbers[0] == 9999)
		{
            std::cerr << "Error: copia superficial en constructor de copia" << std::endl;
            return 1;
        }
        Array<int> assignArray;
        assignArray = numbers;
        assignArray[1] = 8888;
        if (numbers[1] == 8888)
		{
            std::cerr << "Error: copia superficial en operador=" << std::endl;
            return 1;
        }
        try 
		{
            numbers[-1] = 0;
            std::cerr << "Error: no lanzó excepción para índice negativo" << std::endl;
            return 1;
        }
		catch (const std::exception& e)
		{
            std::cout << "Excepción capturada índice negativo: " << e.what() << std::endl;
        }
        try {
            numbers[numbers.size()] = 0;
            std::cerr << "Error: no lanzó excepción para índice fuera de rango" << std::endl;
            return 1;
        }
		catch (const std::exception& e)
		{
            std::cout << "Excepción capturada índice fuera de rango: " << e.what() << std::endl;
        }
        if (numbers.size() != MAX_VAL)
		{
            std::cerr << "Error en función size()" << std::endl;
            return 1;
        }
        for (unsigned int i = 0; i < numbers.size(); i++)
            numbers[i] = i + 1000;
        std::cout << "Todas las pruebas pasaron correctamente." << std::endl;
    }
    catch (const std::exception& e)
	{
        std::cerr << "Excepción inesperada: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}