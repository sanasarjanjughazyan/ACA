#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	int pow2 = 1;
	while (N % 2 == 0)
	{
		pow2 *= 2;
		N /= 2;
	}
	std::cout << pow2 << "\n";
}