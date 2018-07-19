#include <iostream>
int main()
{
	double x;
	int n;
	std::cin >> x >> n;
	double pow = 1;
	while (n > 0)
	{
		pow *= x;
		--n;
	}
	std::cout << pow << "\n";
}