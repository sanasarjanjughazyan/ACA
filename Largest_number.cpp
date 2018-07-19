#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	bool not_rearr = true;
	while (n > 10)
	{
		if ((n % 10) > ((n % 100) / 10))
		{
			not_rearr = false;
			break;
		}
		n /= 10;
	}
	if (not_rearr)
		std::cout << "No" << "\n";
	else
		std::cout << "Yes" << "\n";
}