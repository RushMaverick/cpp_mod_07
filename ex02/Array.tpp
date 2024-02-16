/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:25:24 by rrask             #+#    #+#             */
/*   Updated: 2024/02/12 10:26:13 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &other) : _data(NULL), _size(0)
{
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete[] _data;
		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = other._data[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw Array::CannotAccess();
	return (_data[i]);
}

template <typename T>
const char *Array<T>::CannotAccess::what(void) const throw()
{
	return ("Can't touch that element!");
}