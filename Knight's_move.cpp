#include <iostream>
int main()
{
	int px1, py1, px2, py2;
	std::cin >> px1 >> py1 >> px2 >> py2;
	int px = px2 - px1;
	if (px < 0)
		px = -px;
	int py = py2 - py1;
	if (py < 0)
		py = -py;
	if (px == 1 && py == 2 || px == 2 && py == 1)
		std::cout << "Possible";
	else
		std::cout << "Impossible";
}