#include <iostream>
int main()
{
	int px1, py1, px2, py2;
	std::cin >> px1 >> py1 >> px2 >> py2;
	if ((px1 - px2) * (px1 - px2) + (py1 - py2) * (py1 - py2) == 5)
		std::cout << "Possible";
	else 
		std::cout << "Impossible";
}