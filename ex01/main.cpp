#include <iostream>
#include "iter.hpp"

int	main()
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	*test = arr;

	std::string string_array[] = {"a", "b"};
	std::string *pointer_array = string_array;

	iter(arr, 5, iter_fun<int>);
	iter(test, 5, iter_fun<int>);
	iter(string_array, 2, iter_fun<std::string>);
	iter(pointer_array, 2, iter_fun<std::string>);
}
