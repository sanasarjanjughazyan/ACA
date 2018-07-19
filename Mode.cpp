#include <iostream>
#include <vector>

int CountingSort(std::vector<int>& v, int min, int max)
{
	std::vector<int> count(max - min + 1);
	for (int i = 0; i < (int)v.size(); ++i)
		++count[v[i] - min];
	int mode = count[0];
	int modeind = 0;
	for(int i = 1; i < count.size(); ++i)
		if (count[i] >= mode)
		{
			mode = count[i];
			modeind = i;
		}
	return modeind + min;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::cout << CountingSort(v, -10000, 10000) << "\n";
}