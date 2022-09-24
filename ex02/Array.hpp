#include <iostream>

//https://stackoverflow.com/questions/1087042/c-new-int0-will-it-allocate-memory
/*
When the value of the expression in a direct-new-declarator is zero, the allocation function is called to allocate an array with no elements.
The effect of dereferencing a pointer returned as a request for zero size is undefined.
*/

template <class T>
class	Array
{
private:
	T *_arr;
	unsigned int _size;
public:
	Array(unsigned int size = 0): _arr(new T[size]()), _size(size){}
	~Array(){delete[] _arr;}
	unsigned int size() const {return _size;};

	Array(const Array& other);
	Array &operator=(Array const &rhs);
	T &operator[](unsigned int index);
};

template <class T>
Array<T>::Array(const Array& other): _arr(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i != _size; ++i)
		_arr[i] = other._arr[i];
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	T *temp_arr = new T[rhs._size];
	for (unsigned int i = 0; i != _size; ++i)
		temp_arr[i] = rhs._arr[i];
	delete[] _arr;
	_arr = temp_arr;
	_size = rhs._size;
	return (*this);
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::runtime_error("index out of bound");
	return _arr[index];
}
