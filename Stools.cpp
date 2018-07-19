#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> students(n);
	for (int i = 0; i < n; ++i)
		std::cin >> students[i];
	int tallest = students[0];
	for (int i = 1; i < n; ++i)
		if (students[i] > tallest)
			tallest = students[i];
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += tallest - students[i];
	std::cout << sum << "\n";

}