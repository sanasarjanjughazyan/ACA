#include <iostream>
int main()
{
	int n, an, m, am, k;
	std::cin >> n >> an >> m >> am >> k;
	int d = (am - an) / (m - n);
	int a1 = an - (n - 1) * d;
	int ak = a1 + (k - 1) * d;
	std::cout << ak << "\n";
}