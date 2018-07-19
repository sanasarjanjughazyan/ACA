#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	bool progression = true;
	int d = (n % 10) - ((n / 10) % 10);
	n /= 10;
	while (n > 10)
	{
		if ((n % 10) - ((n / 10) % 10) != d)
		{
			progression = false;
			break;
		}
		n /= 10;
	}
	if (progression)
		std::cout << "Yes" << "\n";
	else
		std::cout << "No" << "\n";
}