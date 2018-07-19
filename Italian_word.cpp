#include <iostream>
#include <string>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	std::vector<std::string> italian;
	for (int i = 0; i < n; ++i)
	{
		if (v[i][v[i].size() - 1] == 'a')
			italian.push_back(v[i] + " - f");
		if (v[i][v[i].size() - 1] == 'o')
			italian.push_back(v[i] + " - m");
	}
	std::cout << italian.size() << "\n";
	for (int i = 0; i < (int)italian.size(); ++i)
		std::cout << italian[i] << "\n";
}