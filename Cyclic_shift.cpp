#include <iostream>
#include <vector>
int main()
{
	int n, k;
	std::cin >> n >> k;
	if (k > n)
		k %= n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	for (int i = n - k; i < n; ++i)
		std::cout << v[i] << " ";
	for(int i = 0; i < n - k; ++i)
		std::cout << v[i] << " ";
	std::cout << " ";
}