#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	int round = (a + 50) / 100 * 100;
	std::cout << round;
}