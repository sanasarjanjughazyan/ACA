#include <iostream>
#include <iomanip>
int main()
{
	std::cout << std::fixed << std::setprecision(2);
	double b1, q;
	int n;
	std::cin >> b1 >> q >> n;
	double qn = 1;
	for (int i = 0; i < n - 1; ++i)
		 qn *= q;
	double bn = b1 * qn;
	std::cout << bn << "\n";
}