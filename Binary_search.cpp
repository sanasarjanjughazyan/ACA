#include <iostream>
#include <vector>

bool BinarySearch(std::vector<int> v, int element, int start, int end)
{
	if (end == start)
		return false;
	int mid = (start + end) / 2;
	if (element == v[mid])
		return true;
	if (element > v[mid])
		return BinarySearch(v, element, mid + 1, end);
	else
		return BinarySearch(v, element, start, mid);
}

bool BS(std::vector<int> v, int x)
{
	return BinarySearch(v, x, 0, v.size());
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int x;
	while (std::cin >> x)
		std::cout << (BS(v, x) ? " YES\n" : " NO\n");
	std::cout << "\n";
}