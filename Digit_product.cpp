#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int prod = 1;
	while (n != 0)
	{
		if (n % 10 != 0)
			prod *= (n % 10);
		n /= 10;
	}
	std::cout << prod << "\n";
}