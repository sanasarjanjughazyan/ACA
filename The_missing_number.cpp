#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n - 1; ++i)
		std::cin >> v[i];
	int sum = v[0];
	for (int i = 1; i < n - 1; ++i)
		sum += v[i];
	int factorial = n * (n + 1) / 2;
	std::cout <<factorial - sum << "\n";
}