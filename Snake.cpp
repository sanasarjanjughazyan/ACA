#include <iostream>
#include <vector>
#include <iomanip>

typedef std::vector<std::vector<int>> Matrix;

int main()
{
	std::cout << std::right;
	int n;
	std::cin >> n;
	Matrix v(n, std::vector<int>(n));
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
			for (int j = 0; j < n; ++j)
				v[j][i] = ++count;
		else
			for (int j = n - 1; j >= 0; --j)
				v[j][i] = ++count;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << std::setw(2) << v[i][j] << " ";
		}
		std::cout << "\n";
	}
}