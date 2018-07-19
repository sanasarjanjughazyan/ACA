#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int count = 1, max = 0;
	for (int i = 0; i + 1 < n; ++i)
	{
		if (v[i] < v[i + 1])
			++count;
		else
		{
			if (count > max)
			{
				max = count;
			}
			count = 1;
		}
	}
	if (count > max)
	{
		max = count;
	}
	std::cout << max << "\n";
}