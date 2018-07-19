#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int x;
	std::cin >> x;
	bool NotFoundAtAll = true;
	for (int i = n - 1; i >= 0; --i)
	{
		if (v[i] == x)
		{
			std::cout << i + 1 << " ";
			NotFoundAtAll = false;
		}
	}
	if (NotFoundAtAll)
		std::cout << -1;
	std::cout << "\n";
}