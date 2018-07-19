#include <iostream>
#include <iomanip>
int main()
{
	int h, m, s, d;
	char c;
	std::cin >> h >> c >> m >> c >> s >> d;
	s += d;
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
	h %= 24;
	std::cout << std::setfill('0');
	std::cout << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s << "\n";
}