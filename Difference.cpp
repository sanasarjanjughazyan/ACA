#include <iostream>
#include <cmath>
int main()
{
	int N;
	std::cin >> N;
	int Reversed = 0, Difference = N;
	std::cout << "N: " << N << "\n";
	while (N != 0)
	{
		Reversed *= 10;
		Reversed += (N % 10);
		N /= 10;
	}
	std::cout << "Reversed: " << Reversed << "\n";
	Difference = std::abs(Reversed - Difference);
	std::cout << "Difference: " << Difference << "\n";
}