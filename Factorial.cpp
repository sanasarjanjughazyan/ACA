#include <iostream>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	return n * Factorial(n - 1);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << Factorial(n) << "\n";
}