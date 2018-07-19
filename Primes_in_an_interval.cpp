#include <iostream>

bool IsPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i*i <= n; ++i)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void Primes(int a, int b)
{
	for (int i = a; i <= b; ++i)
	{
		if (IsPrime(i))
			std::cout << i << " ";
	}
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	Primes(a, b);
}