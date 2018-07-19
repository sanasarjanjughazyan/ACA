#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int crime = 0, police = 0;
	for (int i = 0; i < n; ++i)
	{
		police += v[i];
		if (police < 0)
		{
			++crime;
			police = 0;
		}
	}
	std::cout << crime << "\n";
}