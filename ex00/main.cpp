/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:14:09 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/26 11:30:08 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> container;
	container.push_back(10);
	container.push_back(32);
	container.push_back(1);
	container.push_back(0);
	try
	{
		easyfind(container, 10);
		std::cout << "success" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}