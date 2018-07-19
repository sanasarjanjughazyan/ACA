#include <iostream>

int Number_Of_Ladders(int n, int firtsTowerHeight)
{
	int result = 1;
	for (int i = n + 1; i < (firtsTowerHeight + 1) / 2; ++i)
		result += Number_Of_Ladders(i, firtsTowerHeight - i);
	return (n > firtsTowerHeight) ? 0 : result;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << Number_Of_Ladders(0, n) << "\n";
}