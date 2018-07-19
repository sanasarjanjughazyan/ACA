#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	bool dual = true;
	int first = (n % 10);
	n /= 10;
	while (n % 10 == first)
	{
		n /= 10;
	}
	int second = (n % 10);
	n /= 10;
	while (n != 0)
	{
		if ((n % 10) != first || (n % 10) != second)
		{
			dual = false;
			break;
		}
		n /= 10;
	}
	if (dual)
		std::cout << "Dual" << "\n";
	else
		std::cout << "Not dual" << "\n";
}