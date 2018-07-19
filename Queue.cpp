#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> age(n);
	for (int i = 0; i < n; ++i)
		std::cin >> age[i];
	std::vector<int> label(n);
	int count = 0;
	for (int i = 0; i < n; ++i)
		label[i] = ++count;
	for (int i = 0; i < n - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (age[j] < age[minind])
			{
				std::swap(age[j], age[minind]);
				std::swap(label[j], label[minind]);
			}
		}
	}
	for (int i = 0; i < n; ++i)
		std::cout << label[i] << " ";
	std::cout << "\n";
}