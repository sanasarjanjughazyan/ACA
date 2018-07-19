#include <iostream>
#include <vector>
#include <string>

void Sort(std::vector<std::string>& v)
{
	for (int i = 0; i < (int)v.size() - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < (int)v.size(); ++j)
		{
			if (v[j].size() < v[minind].size() || v[j].size() == v[minind].size() && v[j] < v[minind])
				minind = j;
		}
		std::swap(v[i], v[minind]);
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	Sort(v);
	for (int i = 0; i < n; ++i)
		std::cout << v[i] << " ";
	std::cout << "\n";
}