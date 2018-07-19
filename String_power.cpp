#include <iostream>
#include <string>
#include <cmath>

std::string power_of_string(const std::string& c, int a)
{
	std::string m;
	for (int i = 0; i < a; ++i)
		m += c;
	return m;
}

int main()
{
	std::string s;
	std::cin >> s;
	int k;
	std::cin >> k;
	if (k >= 0)
		std::cout << power_of_string(s, k) << "\n";
	else
	{
		std::string forcheck = s;
		k = std::abs(k);
		s.resize(s.size() / k);
		if (power_of_string(s, k) == forcheck)
			std::cout << s << "\n";
		else
			std::cout << "undefined\n";
	}
}