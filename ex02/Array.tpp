#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
void printVariable(const T& var) {
	std::cout << var << std::endl;
}

template <typename T>
size_t Array<T>::size(){
	std::cout << sizeof() << std::endl
};

template <typename T>
Array<T>::Array() : _size(0), _array(){

};

template <typename T>
Array<T>::Array(const Array &other){

};

//implement operator= as well as a operator[]

template <typename T>
Array<T>::~Array(){
	delete _array[];
};

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[_size]){
	for (int i = 0; i < _size; ++i)
		_array[i] = T;
}

#endif