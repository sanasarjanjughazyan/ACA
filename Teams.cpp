#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	for (int i = 0; i < n - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < n; ++j)
			if (v[j] < v[minind])
				std::swap(v[j], v[minind]);
	}
	std::vector<int> team2;
	for (int i = n - 1; i >= 0; --i)
	{
		if (i % 2 == 0)
			team2.push_back(v[i]);
		else
			std::cout << v[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < team2.size(); ++i)
		std::cout << team2[i] << " ";
	std::cout << "\n";
}