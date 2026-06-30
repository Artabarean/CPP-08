/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:14:04 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/26 11:19:44 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>

template <typename T>
void easyfind(T element, int num)
{
	typename T::iterator found = std::find(element.begin(), element.end(), num);
	if(found != element.end())
	{
		std::cout << num << " Found on container" << std::endl;
	}
	else
	{
		throw	std::runtime_error("Occurrence not found on container");
	}
}
