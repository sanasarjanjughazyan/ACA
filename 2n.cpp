#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	bool power_of_2 = true;
	while (n != 1)
	{
		if (n % 2 != 0)
		{
			power_of_2 = false;
			break;
		}
		n /= 2;
	}
	if (power_of_2)
		std::cout << "Yes" << "\n";
	else
		std::cout << "No" << "\n";
}