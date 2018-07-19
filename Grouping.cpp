#include <iostream>
#include <string>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::string s = " times ";
	int count = 1;
	for (int i = 0; i + 1 < n; ++i)
	{
		if (v[i] == v[i + 1])
			++count;
		else
		{
			std::cout << count << s << v[i] << "\n";
			count = 1;
		}
	}
	std::cout << count << s << v[v.size() - 1] << "\n";
}