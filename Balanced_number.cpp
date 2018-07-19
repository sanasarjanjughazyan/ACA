#include <iostream>
#include <cmath>
int main()
{
	int n;
	std::cin >> n;
	int zuyg = 0, kent = 0;
	while (n != 0)
	{
		if ((n % 10) % 2 == 0)
			++zuyg;
		else
			++kent;
		n /= 10;
	}
	if (std::abs(zuyg - kent) == 1 || zuyg - kent == 0)
		std::cout << "Yes" << "\n";
	else
		std::cout << "NO" << "\n";
}