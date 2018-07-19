#include <iostream>

int Reversed(int n)
{
	int x = n % 10;
	n /= 10;
	while (n != 0)
	{
		x *= 10;
		x += (n % 10);
		n /= 10;
	}
	return x;
}

bool IsPalindrom(int n)
{
	return n == Reversed(n);
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (IsPalindrom(i))
			std::cout << i << " ";
	}
	std::cout << "\n";
}