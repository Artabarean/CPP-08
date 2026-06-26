/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:04:44 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/26 12:53:21 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack
{
	public:
		typedef __gnu_cxx::__normal_iterator<pointer, vector> iterator;
	private:
		
};

#endif