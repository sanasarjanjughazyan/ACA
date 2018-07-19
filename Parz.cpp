#include <iostream>
int main()
{
	int n;
	bool parz = true;
	std::cin >> n;
	int x = 2;
	while (x*x <= n)
	{
		if (n % x == 0)
		{
			parz = false;
			break;
		}
		++x;
	}
	if (parz)
		std::cout << "parz tiv" << "\n";
	else
		std::cout << "Voch parz tiv" << "\n";
}