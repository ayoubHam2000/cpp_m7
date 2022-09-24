#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void iter_fun(T &a)
{
	std::cout << a << std::endl;
}

template <class A, class B, class C>
void	iter(A *const arr_adr, const B &len, C fun)
{
	for (B i = 0; i != len; ++i)
		fun(*(arr_adr + i));
}

#endif
