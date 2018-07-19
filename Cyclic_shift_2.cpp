#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v1(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v1[i];
	std::vector<int> v2(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v2[i];
	for (int i = 0; i < n; ++i)
		v1.push_back(v1[i]);
	for (int i = 0; i < n; ++i)
	{
		bool possible = true;
		for (int j = 1; j < n; ++j)
		{
			if (v1[i + j] != v2[j])
			{
				possible = false;
				break;
			}
		}
		if (possible)
		{
			std::cout << "Yes\n";
			return 0;
		}
	}
	std::cout << "No\n";
}