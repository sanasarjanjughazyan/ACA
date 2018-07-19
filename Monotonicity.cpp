#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	bool ascending = true, descending = true;
	for (int i = 1; i < n ; ++i)
	{
		int t = i - 1;
		if (v[t] == v[i])
		{
			descending = false;
			ascending = false;
			break;
		}
		else if (v[t] < v[i])
			descending = false;
		else 
			ascending = false;
	}
	if (ascending)
		std::cout << "Ascending\n";
	else if (descending)
		std::cout << "Descending\n";
	else 
		std::cout << "Neither\n";
}