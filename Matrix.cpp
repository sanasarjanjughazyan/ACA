#include <iostream>
#include <vector>

typedef std::vector<std::vector<double>> Matrix;

int main()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	Matrix A(n, std::vector<double>(m));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			std::cin >> A[i][j];
	Matrix B(m, std::vector<double>(k));
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < k; ++j)
			std::cin >> B[i][j];
	Matrix C(n, std::vector<double>(k));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < k; ++j)
			for(int t = 0; t < m; ++t)
			C[i][j] += A[i][t] * B[t][j];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
			std::cout << C[i][j] << " ";
		std::cout << "\n";
	}
}