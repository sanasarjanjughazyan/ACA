#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<double> amount(n);
	for (int i = 0; i < n; ++i)
		std::cin >> amount[i];
	int last = n;
	for (int i = 0; i < n; ++i)
	{
		bool sorted = true;
		int last1 = last;
		for (int j = 0; j + 1 < last1; ++j)
		{
			if (amount[j] > amount[j + 1])
			{
				std::swap(amount[j], amount[j + 1]);
				sorted = false;
				last = j + 1;
			}
		}
		if (sorted)
			break;
	}
	std::vector<double> rev;
	for (int i = n - 1; i >= 0; --i)
		rev.push_back(amount[i]);
	rev.resize(m);
	double sum = 0.0;
	for (int i = 0; i < rev.size(); ++i)
		sum += rev[i];
	std::cout << sum << "\n";
}