#include <iostream>
#include <string>
int main()
{
	int x0, y0, n;
	std::cin >> x0 >> y0 >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string c;
		std::cin >> c;
		if (c == "up")
			++y0;
		else if (c == "down")
			--y0;
		else if (c == "left")
			--x0;
		else if (c == "right")
			++x0;
	}
	std::cout << x0 << " " << y0 << "\n";
}