/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:48 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/26 11:37:07 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <stdexcept>


class Span
{
	public:
		Span(unsigned int N);
		Span(void);
		Span(const Span& other);
		~Span(void);

		void addNumber(int number);
		int shortestSpan(void);
		int longestSpan(void);
		void printNumbers(void);
		Span &operator=(const Span& other);

		template <typename InputIter>
    	void addRange(InputIter first, InputIter last)
		{
			if (static_cast<unsigned int>(std::distance(first, last)) > (_size - _integers.size()))
				throw std::out_of_range("Max amount of stored values has already been reached");
			_integers.insert(_integers.end(), first, last);
		}

		class emptySpan : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class notEnough : public std::exception
		{
			public:
				const char* what() const throw();
		};
	private:
		std::vector<int> _integers;
		unsigned int _size;
};