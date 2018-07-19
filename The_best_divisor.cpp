#include <iostream>

int SumOfDigits(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int BestDivisor(int n)
{
	int patasxan = 1, max = 1;
	for (int i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
			int sum = SumOfDigits(i);
			if (sum > max)
			{
				max = sum;
				patasxan = i;
			}
		}
		
	}
	return patasxan;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << BestDivisor(n) << "\n";
}