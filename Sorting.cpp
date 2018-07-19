#include <iostream>
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		int t = b;
		b = c;
		c = t;
	}
	std::cout << a  << " " << b << " " << c << " ";
}