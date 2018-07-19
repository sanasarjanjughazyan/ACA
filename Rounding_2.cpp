#include <iostream>
int main()
{
	double a;
	std::cin >> a;
	int i = a;
	double mnac = a - i;
	if (mnac >= 0.5)
	{
		i = i + 1;
		std::cout << i << "\n";
	}
	std::cout << i << "\n";
}