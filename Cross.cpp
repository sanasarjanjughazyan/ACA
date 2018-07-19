#include <iostream>
int main()
{
	int l, t;
	std::cin >> l >> t;
	int d = (l - t) / 2;
	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < l; ++j)
		{
			if (i >= d && i < l - d || j >= d && j < l - d)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}