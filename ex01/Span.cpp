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
	: _size(N)
{
	_integers.reserve(N);
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

template <typename InputIter>
void Span::addRange(InputIter first, InputIter last)
{
	if (std::distance(first, last) > static_cast<long>(_maxSize - _numbers.size()))
		throw std::out_of_range("Max amount of stored values has alreadt been reached");
	_integers.insert(_integers.end(), first, last);
}

void Span::printNumbers(void)
{
	for (unsigned int i = 0; i < _size; ++i)
	{
		std::cout << _integers[i] << std::endl;
	}
}

int Span::longestSpan(void)
{
	if (_size < 2)
		throw notEnough();
	return (*std::max_element(_integers.begin(), _integers.end()))
			- *std::min_element(_integers.begin(), _integers.end());
}

int Span::shortestSpan(void)
{
	if (_size < 2)
		throw notEnough();
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
	return ("Integer array is empty!");
}

const char *Span::notEnough::what() const throw()
{
	return ("Integer array does not contain enough integers");
}