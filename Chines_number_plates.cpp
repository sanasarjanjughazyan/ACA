#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int amount = 0;
	while (n != 0)
	{
		if (n % 10 == 8)
			amount += 1000;
		n /= 10;
	}
	std::cout << amount << "\n";
}