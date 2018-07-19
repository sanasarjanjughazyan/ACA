#include <iostream>
#include <iomanip>
int main()
{
	char c;
	int r, g, b;
	std::cin >> c >> r >> c >> g >> c >> b >> c;
	std::cout << std::uppercase << std::setfill('0') << std::hex;
	std::cout << "#" << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b << "\n";
}