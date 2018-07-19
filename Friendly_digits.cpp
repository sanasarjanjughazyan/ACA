#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<bool> first(10);
	std::vector<bool> second(10);
	while (n > 0)
	{
		first[n % 10] = true;
		n /= 10;
	}
	while (m > 0)
	{
		second[m % 10] = true;
		m /= 10;
	}
	std::cout << (first == second ? "Yes\n" : "No\n");
}