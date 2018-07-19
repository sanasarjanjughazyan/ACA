#include <iostream>

int main()
{
	int n;
	char c;
	std::cin >> c >> n;
	c += -'a' + 1;
	if ((c + n) % 2 == 0)
		std::cout << "black\n";
	else
		std::cout << "white\n";
}