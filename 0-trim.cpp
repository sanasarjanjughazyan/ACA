#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int start = 0, end = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] != 0)
		{
			start = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; --i)
	{
		if (v[i] != 0)
		{
			end = i;
			break;
		}
	}
	for (int i = start; i <= end; ++i)
		std::cout << v[i] << " ";
	std::cout << "\n";
}