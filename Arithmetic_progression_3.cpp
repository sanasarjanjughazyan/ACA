#include <iostream>
int main()
{
	double a1, a2;
	int n;
	std::cin >> a1 >> a2 >> n;
	double d = a2 - a1;
	double an = a1 + (n - 1) * d;
	std::cout << "a[" << n << "] = " << an << "\n";
}