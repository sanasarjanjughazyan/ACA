#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(25);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	int answer = 100000;
	int limit = 1 << n;
	while(limit)
	{
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (limit & (1 << i))
				sum += v[i];
			else
				sum -= v[i];
		}
		if (sum >= 0 && answer > sum)
			answer = sum;
		--limit;
	}
	std::cout << answer << "\n";
}