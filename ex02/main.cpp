#include <iostream>
#include "Array.hpp"

void	test1()
{
	Array<std::string>	empty_arr;

	std::cout << empty_arr.size() << std::endl;
	try
	{
		empty_arr[0];
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	
	Array<std::string>	arr(10);
	for (unsigned int i = 0; i != arr.size(); ++i)
		arr[i] = std::string(i + 1, 'H');
	for (unsigned int i = 0; i != arr.size(); ++i)
		std::cout << arr[i] << std::endl;
	
	Array<std::string> copy;

	copy = empty_arr;
	std::cout << copy.size() << std::endl;
	
	copy = arr;
	std::cout << copy.size() << std::endl;
	copy[1] = "Hello";
	std::cout << arr[1] << std::endl;
	std::cout << copy[1] << std::endl;
}

int	main()
{
	test1();
	// system("leaks template");
	return (0);
}
