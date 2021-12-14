#ifndef __WHATEVER__H__
#define __WHATEVER__H__
#include <iostream>

template <class T>
void	swap(T &a, T &b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <class T>
T	min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <class T>
T	max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}
#endif  //!__WHATEVER__H__