#include <iostream>

int gcd(int a, int b)
{
	return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
	int n;
	std::cin >> n;
	int answer = 0;
	for (int i = 1; i <= n; ++i)
		if (gcd(i, n) == 1)
			++answer;
	std::cout << answer << "\n";
}