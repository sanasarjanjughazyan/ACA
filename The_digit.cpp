#include <iostream>
#include <fstream>
int main()
{
	std::ifstream fin("numbers.txt");
	if (!fin.is_open())
		std::cout << "Error";
	int n;
	char x;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		fin >> x;
	}
	std::cout << x << "\n";
}