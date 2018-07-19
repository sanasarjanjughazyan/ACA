#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << a << "*" << b << "=";
	int count = 0;
	for (int i = 0; i < b; ++i)
	{
		count += a;
		std::cout << a;
		if (i != b - 1)
			std::cout << "+";

	}
	std::cout << "=" << count << "\n";
}