#include <iostream>
int main()
{
	int x = 2;
	while (x <= 100)
	{
		int y = 2;
		bool parz = true;
		while (y*y <= x)
		{
			if (x % y == 0)
				parz = false;
			++y;
		}
		if (parz)
			std::cout << x << " ";
		++x;
	}

}