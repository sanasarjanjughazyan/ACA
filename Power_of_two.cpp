#include <iostream>

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::cout << ((n & (n - 1)) ? "No\n" : "Yes\n");
}