/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/26 11:46:19 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
	: _size(N)
{
}

Span::Span(void)
	: _size(0)
{
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(void)
{
}

void Span::addNumber(int number)
{
	if (_integers.size() >= _size)
		throw std::out_of_range("Max amount of stored values has already been reached");
	_integers.push_back(number);
}

void Span::printNumbers(void)
{
	std::vector<int>::const_iterator iter = _integers.begin();
	for ( ;	iter != _integers.end(); ++iter)
		std::cout << *iter << std::endl;
}

int Span::longestSpan(void)
{
	if (_size < 2)
		throw notEnough();
	if (_integers.empty())
		throw emptySpan();
	return (*std::max_element(_integers.begin(), _integers.end()))
			- *std::min_element(_integers.begin(), _integers.end());
}

int Span::shortestSpan(void)
{
	if (_size < 2)
		throw notEnough();
	if (_integers.empty())
		throw emptySpan();
	std::vector<int> sorted(_integers);
	std::sort(sorted.begin(), sorted.end());
	std::vector<int> diff(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), diff.begin());
	return (*std::min_element(diff.begin() + 1, diff.end()));
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;
		_integers = other._integers;
	}
	return (*this);
}

const char *Span::emptySpan::what() const throw()
{
	return ("Span is empty!");
}

const char *Span::notEnough::what() const throw()
{
	return ("Span does not contain enough integers");
}