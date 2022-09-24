#ifndef UTIL_HPP
#define UTIL_HPP

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	if (b < a)
		return (b);
	return (b);
}

template <class T>
const T	 &max(T const &a, T const &b)
{
	if (a < b)
		return (b);
	if (b < a)
		return (a);
	return (b);
}

#endif
