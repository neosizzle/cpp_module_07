#ifndef __ITER__H__
#define __ITER__H__

template <class T>
void	iter(T *arr, int len, void (*func)(T elem))
{
	int	i;

	i = -1;
	while (++i < len)
		func(arr[i]);
}

#endif  //!__ITER__H__