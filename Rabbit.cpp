#include <iostream>
#include <vector>
int main()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	v[0] = 1;
	for (int i = 1; i < n; ++i)
	{
		for (int j = i - 1; j >= 0; --j)
			if (i - j <= k)
				v[i] += v[j];
	}
	std::cout << v[n - 1] << "\n";
}