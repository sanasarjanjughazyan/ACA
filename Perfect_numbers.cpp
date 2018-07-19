#include <iostream>

int Sum_of_divisors(int n)
{
	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int Perfect_numbers(int a, int b)
{
	int count = 0;
	for (int i = a; i <= b; ++i)
	{
		if (i == Sum_of_divisors(i))
			++count;
	}
	return count;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << Perfect_numbers(a, b) << "\n";
}