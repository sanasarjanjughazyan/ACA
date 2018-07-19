#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int x = 1;
	int count = 0;
	while (x <= n)
	{
		std::cout << x << " ";
		++count;
		if (count % 10 == 0)
		{
			std::cout << "\n";		
		}
		x += 2;
	}
}