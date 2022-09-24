#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750


int	intra_test()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	return (0);
}

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
	intra_test();
	// system("leaks template");
	return (0);
}
