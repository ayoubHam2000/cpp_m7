#include <iostream>
#include "util.hpp"

int _main( void ) 
{
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
	return 0;
}

void	my_test()
{	

	int	a = 41;
	int	b = 20;
	std::string s_a("a");
	std::string s_b("b");

	std::cout << ::min(a, b) << std::endl;
	std::cout << ::max(s_a, s_b) << std::endl;
	std::cout << ::max(10, 50) << std::endl;
	swap(a, b);
	swap(s_a, s_b);
	std::cout << a << ", " << b << std::endl;
	std::cout << s_a << ", " << s_b << std::endl;

}

int main()
{

	_main();
	//my_test();

	return (0);
}
