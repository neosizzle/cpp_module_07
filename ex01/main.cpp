#include "Iter.hpp"
#include <iostream>

template <class T>
void	printElem(T elem)
{
	std::cout << elem;
}

void	printElemPlusOne(int elem)
{
	std::cout << elem + 1;
}

int	main()
{
	int	intArr[] = {1, 2, 3, 4, 5};
	std::string strArr[5];
	strArr[0] = "hello ";
	strArr[1] = " i ";
	strArr[2] = " am ";
	strArr[3] = " string ";
	strArr[4] = " array ";

	iter("hello", 5, printElem);
	std::cout << "\n";
	iter(intArr, 5, printElem);
	std::cout << "\n";
	iter(strArr, 5, printElem);
	std::cout << "\n";
	iter(intArr, 5, printElemPlusOne);
	std::cout << "\n";
	return 0;
}
