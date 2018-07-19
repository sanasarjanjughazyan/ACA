#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int sum = 0;
	int pow26 = 1;
	int qayl = 0;
	while (sum < n)
	{
		pow26 *= 26;
		sum += pow26;
		++qayl;
	}
	std::cout << qayl << "\n";
}