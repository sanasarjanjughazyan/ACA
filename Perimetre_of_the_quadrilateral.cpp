#include <iostream>
#include <iomanip>
#include <cmath>

double SegmentLength(double x1, double y1, double x2, double y2)
{
	double length = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return length;
}

int main()
{
	std::cout << std::fixed << std::setprecision(2);
	double x1, y1, x2, y2, x3, y3, x4, y4;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	double segment1 = SegmentLength(x1, y1, x2, y2);
	double segment2 = SegmentLength(x2, y2, x3, y3);
	double segment3 = SegmentLength(x3, y3, x4, y4);
	double segment4 = SegmentLength(x4, y4, x1, y1);
	std::cout << segment1 + segment2 + segment3 + segment4 << "\n";
}