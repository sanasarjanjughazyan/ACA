#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << (a * b) / 2 << "." << (a * b) % 2 * 5 << "\n";
}