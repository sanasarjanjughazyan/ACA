#include <iostream>

int Power(int a, int n)
{
	if (n == 0)
		return 1;
	int x = Power(a, n/2);
	if (n % 2 == 0)
		return x * x;
	else
		return a * x * x;
}

int main()
{
	int a, n;
	std::cin >> a >> n;
	std::cout << Power(a, n) << "\n";
}