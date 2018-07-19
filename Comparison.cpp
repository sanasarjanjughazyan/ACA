#include <iostream>
#include <string>
int main()
{
	std::string a, b;
	std::cin >> a >> b;
	if (a == b)
		std::cout << "=\n";
	else if(a.size() < b.size())
		std::cout << "<\n";
	else if (a.size() > b.size())
		std::cout << ">\n";
	else
	{
		for (int i = 0; i < (int)a.size(); ++i)
		{
			if (a[i] < b[i])
			{
				std::cout << "<\n";
				break;
			}
			else if (a[i] > b[i])
			{
				std::cout << ">\n";
				break;
			}
		}
	}
}