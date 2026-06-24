/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:58 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/24 11:48:25 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span int_array(5);
	try
	{
		int_array.addNumber(23);
		int_array.addNumber(2);
		int_array.addNumber(3);
		int_array.addNumber(501);
		int_array.addNumber(90);
		int_array.addNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	int_array.printNumbers();
	return (0);
}