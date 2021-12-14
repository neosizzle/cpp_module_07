#include "Array.hpp"
#include <iostream>

void	print(std::string str)
{
	std::cout << str << "\n";
}
void	print_nonl(std::string str)
{
	std::cout << str ;
}
int main()
{
	print("=======INT ARRAY TESTS=======");
	Array<int> arr(5);
	arr[0] = 0;
	arr[1] = 12;
	arr[2] = 22;
	arr[3] = 32;
	arr[4] = 42;
	for (size_t i = 0; i < 5; i++)
		std::cout << "arr[" << i << "] : " << arr[i] << "|";
	
	print("\n=============================");
	print("=======CHAR ARRAY TESTS=======");
	Array<char> arrchar(8);
	arrchar[0] = 'b';
	arrchar[1] = 'i';
	arrchar[2] = 'g';
	arrchar[3] = ' ';
	arrchar[4] = 's';
	arrchar[5] = 'i';
	arrchar[6] = 'm';
	arrchar[7] = 'p';
	for (size_t i = 0; i < 8; i++)
		std::cout << static_cast<char>(arrchar[i]) << " ";
	
	print("\n=============================");
	print("=======STR ARRAY TESTS=======");
	Array<std::string> arrstr(4);
	arrstr[0] = "its about rice,";
	arrstr[1] = "its about flour,";
	arrstr[2] = "you stay hungry,";
	arrstr[3] = "i devouver";

	for (size_t i = 0; i < 4; i++)
		std::cout << (arrstr[i]) << "\n";
	
	print("=============================");
	print("=======DOUBLE ARRAY TESTS=======");
	Array<double> arrdouble(4);
	arrdouble[0] = 69;
	arrdouble[1] = -69;
	arrdouble[2] = 420.69;
	arrdouble[3] = -420.69;

	for (size_t i = 0; i < 4; i++)
		std::cout << (arrdouble[i]) << " ";
	
	print("\n=============================");
	print("=======ERROR TESTS=======");
	try{
		Array<int> arrerr(0);
		std::cout << arrerr[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	print("\n=============================");
	print("=======ARRAY WRITE TESTS=======");
	print("orignal :");
	for (size_t i = 0; i < 4; i++)
		std::cout << (arrstr[i]) << "\n";
	arrstr[0] = "neva gona giv u up,";
	arrstr[1] = "neva gona let u daun";
	arrstr[2] = "neva gona run araund,";
	arrstr[3] = "and dicert u";
	print("\nchanged :");
	for (size_t i = 0; i < 4; i++)
		std::cout << (arrstr[i]) << "\n";
	print("\n=============================");
	return 0;
}
