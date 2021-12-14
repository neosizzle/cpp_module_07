//Unusable because of linking issue. source : https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
// #include "Array.hpp"

/*
** methods
*/
// template <class T>
// unsigned int Array<T>::size()
// {
// 	return _size;
// }

/*
** OCF
*/
// template <class T>
// Array<T>::Array()
// {
// 	this->_data = new T[0];
// 	this->_size = 0;
// }

// template <class T>
// Array<T>::Array(unsigned int num)
// {
// 	this->_data = new T[num];
// 	this->_size = num;
// }

// template <class T>
// Array<T>::Array(const Array &array)
// {
// 	int	i;

// 	this->_data = new T[array.size()];
// 	this->_size = array.size();
// 	i = -1;
// 	while (++i < size)
// 		this->_data[i] = array->_data[i];
// }

// template <class T>
// Array<T> & Array<T>::operator = (const Array &array)
// {
// 	int	i;

// 	this->_data = new T[array.size()];
// 	this->_size = array.size();
// 	i = -1;
// 	while (++i < size)
// 		this->_data[i] = array->_data[i];
// }

// template <class T>
// T & Array<T>::operator [] (unsigned int i)
// {
// 	if (i > this->_size)
// 		throw Array<T>::BufferOverflowException();
// 	return this->_data[i];
// }

// template <class T>
// Array<T>::~Array()
// {
// 	delete[] this->_data;
// }
