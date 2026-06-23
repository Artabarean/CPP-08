/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:31:48 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/23 15:33:17 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Span
{
	public:
		Span(unsigned int N);
		~Span(void);
		void addNumber(void);
		int shortestSpan(void);
		int longestSpan(void);
		Span &operator=(const Span& other);
	private:
		T *_integers;
		unsigned int _maxN;
};