/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/24 11:52:20 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
	: _curr_pos(0), _size(N)
{
	_integers = new int[N]();
}

Span::~Span(void)
{
	delete[] _integers;
}
void Span::addNumber(int number)
{
	if (_curr_pos < _size)
	{
		_integers[_curr_pos] = number;
		++_curr_pos;
	}
	else
		throw std::out_of_range("Max amount of stored values has been reached");
}

void Span::printNumbers(void)
{
	for (unsigned int i = 0; i < _size; ++i)
	{
		std::cout << _integers[i] << std::endl;
	}
}

// int Span::longestSpan(void)
// {

// }

// int Span::shortestSpan(void)
// {

// }

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		delete[] _integers;
		_size = other._size;
		_curr_pos = other._curr_pos;
		_integers = new int[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_integers[i] = other._integers[i];
		}
	}
	return (*this);
}

bool Span::operator!=(const Span &other) const
{
	if (_size != other._size)
		return (true);	
	for (unsigned int i = 0; i < _size; ++i)
	{
		if (_integers[i] != other._integers[i])
			return (true);
	}
	return (false);
}