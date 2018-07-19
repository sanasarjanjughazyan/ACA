#include <iostream>
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	int min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	std::cout << max - min << "\n";
}