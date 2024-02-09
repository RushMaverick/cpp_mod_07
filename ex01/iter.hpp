#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void printVariable(T var) {
	std::cout << var << std::endl;
}

template <typename T>
void iter(T* a, size_t length, void (*func)(T)){
	for (size_t i = 0; i < length; ++i){
		func(a[i]);
	}
}

#endif