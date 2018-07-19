#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(10);
	for (int i = 0; i < v.size(); ++i)
		std::cin >> v[i];
	int c;
	std::cin >> c;
	int sum = 0;
	for (int i = 0; i < v.size(); ++i)
		if ((c & (1 << i)) != 0)     // Levon jan,vor xndrem kases ste xi == 1-in chi ashxatum?
			sum += v[v.size() - 1 - i];
	std::cout << sum << '\n';
}