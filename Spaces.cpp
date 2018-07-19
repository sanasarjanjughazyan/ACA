#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v;
	while(n > 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}
	for (int i = v.size() - 1; i >= 0; --i)
	{
		std::cout << v[i] << " ";

	}
}