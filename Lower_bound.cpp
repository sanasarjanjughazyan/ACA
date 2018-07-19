#include <iostream>
#include <vector>

int LowerBound(const std::vector<int>& v, int element, int start, int end)
{
	if (end == start)
		return end;
	int mid = (end + start) / 2;
	if (element > v[mid])
		return LowerBound(v, element, mid + 1, end);
	return LowerBound(v, element, start, mid);
}

int BS(const std::vector<int>& v, int element)
{
	return LowerBound(v, element, 0, v.size());
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
		std::cout << BS(v, x) << "\n";
}