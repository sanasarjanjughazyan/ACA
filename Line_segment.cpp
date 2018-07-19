#include <iostream>
#include <cmath>
int main()
{
	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	double line1 = x1 - x2;
	double line2 = y1 - y2;
	std::cout << sqrt(line1 * line1 + line2 * line2) << "\n";
}