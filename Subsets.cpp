#include <iostream>
#include <vector>

void PrintSubset(const std::vector<int>& v, int mask)
{
	std::cout << "{";
	bool first = true;
	for (int i = 0; i < v.size(); ++i)
		if (mask & (1 << i))
		{
			if (first)
			{
				std::cout << v[i];
				first = false;
			}
			else
				std::cout << "," << v[i];
		}
	std::cout << "}";
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	for (int mask = 0; mask < 1 << v.size(); ++mask)
	{
		PrintSubset(v, mask);
		std::cout << "\n";
	}
}