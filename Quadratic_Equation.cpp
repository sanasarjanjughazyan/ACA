#include <iostream>
#include <cmath>
int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double D = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				std::cout << "Non-quadratic equation \n";
				std::cout << "Infinite solutions";
			}
			else
			{
				std::cout << "Non-quadratic equation \n";
				std::cout << "No solutions";
			}
		}
		else
		{
			std::cout << "Non-quadratic equation \n";
			std::cout << "One solution" << -c / b;
		}
	}
	else if (D > 0)
	{
		std::cout << "Quadratic equation \n";
		std::cout << "Discriminant: " << D << "\n";
		std::cout << "Two solutions" << (-b - sqrt(D)) / (2 * a) << " " << (-b + sqrt(D)) / (2 * a);
	}
	else if (D == 0)
	{
		std::cout << "Quadratic equation \n";
		std::cout << "Discriminant: " << D << "\n";
		std::cout << "One solution" << -b / (2 * a);
	}
	else
	{
		std::cout << "Quadratic equation \n";
		std::cout << "Discriminant: " << D << "\n";
		std::cout << "No solutions";
	}
}