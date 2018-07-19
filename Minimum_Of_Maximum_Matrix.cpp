#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrix;

int main()
{
	int n, m;
	std::cin >> n >> m;
	Matrix A(n, std::vector<int>(m));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			std::cin >> A[i][j];
	
	int min_max;
	for (int i = 0; i < n; ++i)
	{
		int max = A[i][0];
		for (int j = 1; j < m; ++j)
			if (A[i][j] > max)
				max = A[i][j];
		if (i == 0 || max < min_max)
			min_max = max;
	}
	std::cout << min_max << "\n";
}