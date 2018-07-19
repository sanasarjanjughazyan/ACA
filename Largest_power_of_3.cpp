#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int pow3 = 3;
	while (pow3*3 <= n)
	{
		pow3 *= 3;
	}
	std::cout << pow3 << "\n";
}