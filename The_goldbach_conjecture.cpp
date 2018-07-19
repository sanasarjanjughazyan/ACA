#include <iostream>

bool IsPrime(int n)
{
	bool IsPrime = true;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			IsPrime = false;
			break;
		}
	}
	return IsPrime;
}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 2; i < n; ++i) // kam e i = 1,uxxaki saxi arajine 1-ov klini u 12-i 5 u 7 eli chi lini))
	{
		if (IsPrime(i))
		{
			int second = n - i;
			if (IsPrime(second))
			{
				std::cout << i << " " << second << "\n";
				break; // ete uzum enq bolor tarberakner@ tpi, jnjum enq break hraman@
			}
		}
	}
}