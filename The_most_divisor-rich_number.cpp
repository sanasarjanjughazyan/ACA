#include <iostream>

int NumOfDivisors(int n)
{
	int count = 0;
	for (int i = 2; i <= n; ++i)  
	{							   
		if (n % i == 0)
			++count;
	}
	return count;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	int max = NumOfDivisors(a);
	int answer = 0;
	for (int i = a + 1; i <= b; ++i)
	{
		if (NumOfDivisors(i) > max)
		{
			max = NumOfDivisors(i);
			answer = i;
		}
	}
	std::cout << answer << "\n";
}