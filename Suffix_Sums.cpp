#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<double> A(n);
	for (int i = 0; i < n; ++i)
		std::cin >> A[i];
	double sum = 0;
	for (int i = 0; i < n; ++i)
		sum += A[i];
	for (int i = 0; i < n; ++i)
	{
		std::cout << sum << " ";
		sum -= A[i];
	}
	std::cout << "\n";
}