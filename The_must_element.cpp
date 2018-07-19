#include <iostream>
#include <vector>

int MaxElement(const std::vector<int>& v, int first, int last)
{
	if (last == first)
		return v[last];
	int a = v[last];
	int max = MaxElement(v, first, --last);
	return (a >  max ? a : max);
}

int main()
{
	int n, q;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int first, last;
		std::cin >> first >> last;
		std::cout << MaxElement(v, first, last) << "\n";
	}
}