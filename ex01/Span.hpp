/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:48 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/24 11:52:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

class Span
{
	public:
		Span(unsigned int N);
		~Span(void);
		void addNumber(int number);
		// int shortestSpan(void);
		// int longestSpan(void);
		void printNumbers(void);
		Span &operator=(const Span& other);
		bool operator!=(const Span &other) const;
	private:
		unsigned int _curr_pos;
		int *_integers;
		unsigned int _size;
};