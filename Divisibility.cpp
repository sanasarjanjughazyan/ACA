#include <iostream>
#include <vector>

int GCD(int a, int b)
{
	return (b == 0 ? a : GCD(b, a % b));
}

std::vector<int> LCD_Divisibles(const std::vector<int>& v1, std::vector<int>& v2)
{
	int x = v2[0];
	for (int i = 1; i < v2.size(); ++i)
		x = (x * v2[i]) / GCD(v2[i], x);
	v2.clear();
	for (int i = 0; i < v1.size(); ++i)
		if (v1[i] % x == 0)
			v2.push_back(v1[i]);
	return v2;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v1(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v1[i];
	int m;
	std::cin >> m;
	std::vector<int> v2(m);
	for (int i = 0; i < m; ++i)
		std::cin >> v2[i];
	LCD_Divisibles(v1, v2);
	std::cout << v2.size() << "\n";
	for (int i = 0; i < v2.size(); ++i)
		std::cout << v2[i] << " ";
	std::cout << "\n";
}