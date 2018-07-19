#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int sum1 = 0, sum2 = 0;
	while (n != 0)
	{
		sum1 += (n % 10);
		sum2 += ((n % 100) / 10);
		n /= 100;
	}
	if (sum1 == sum2)
		std::cout << "Yes" << "\n";
	else
		std::cout << "No" << "\n";
}