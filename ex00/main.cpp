#include "whatever.hpp"

void	print(std::string str)
{
	std::cout << str << "\n";
}
void	print_nonl(std::string str)
{
	std::cout << str ;
}
int	main()
{
	print("=======DEFAULT MAIN======");
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	print("=========================");
	print("=======CHAR TEST======");
	char c1 = 'c';
	char c2 = 'd';
	::swap( c1, c2 );
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
	std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;\
	print("=========================");
	print("=======DOUBLE TEST======");
	double d1 = 0.5;
	double d2 = 5.0;
	::swap( d1, d2 );
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl;
	print("=========================");
	print("=======FLOAT TEST======");
	double f1 = 0.5f;
	double f2 = 5.0f;
	::swap( f1, f2 );
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
	print("=========================");
	return 0;

}
