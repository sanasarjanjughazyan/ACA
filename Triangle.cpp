#include <iostream>
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (c < a)
	{
		int t = c;
		c = a;
		a = t;
	}
	if (c < b)
	{
		int t = c;
		c = b;
		b = t;
	}
	if (a + b <= c)
		std::cout << "No Triangle";
	else
	{
		if (a * a + b * b > c * c)
			std::cout << "Acute Triangle";
		else if (a * a + b * b < c * c)
			std::cout << "Obtuse Triangle";
		else
			std::cout << "Right Triangle";
	}
}