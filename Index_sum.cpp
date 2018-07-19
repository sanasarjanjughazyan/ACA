#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<double> A(n);
	for (int i = 0; i < n; ++i)
		std::cin >> A[i];
	int m;
	std::cin >> m;
	std::vector<int> IND(m);
	for (int i = 0; i < m; ++i)
		std::cin >> IND[i];
	int sum = 0;
	for (int i = 0; i < m; ++i)
		sum += A[IND[i]];
	std::cout << sum << "\n";
}