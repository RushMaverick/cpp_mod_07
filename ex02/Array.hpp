/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:25:31 by rrask             #+#    #+#             */
/*   Updated: 2024/02/12 10:30:35 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

#ifndef NULL
#define NULL 0
#endif

template <typename T>
class Array{
	private:
		T *_data;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		~Array();
		Array &operator=(Array const &other);
		T &operator[](unsigned int i) const;

		unsigned int size() const { return (_size); }

		class CannotAccess : public std::exception{
			virtual const char *what(void) const throw();
		};
};

#include "Array.tpp"

#endif