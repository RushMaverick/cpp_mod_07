#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Array.tpp"
#include <cstddef>
#include <exception>

template <typename T>
void printVariable(const T& var);

template <typename T>
class Array {
	private:
		T *data _array;
		size_t _size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array operator=(const Array &other);
		size_t size();
};

#endif