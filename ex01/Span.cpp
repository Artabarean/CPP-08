/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/23 15:35:11 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
template <typename T>
Span<T>::Span(unsigned int N)
	: _maxN(N)
{
	_integers = new T[N]();
}

template <typename T>
Span<T>::~Span(void)
{
}
template <typename T>
void Span<T>::addNumber(void)
{
	
}

template <typename T>
int Span<T>::longestSpan(void)
{

}

template <typename T>
int Span<T>::shortestSpan(void)
{

}

template <typename T>
Span& Span<T>::operator=(const Span& other)
{

}