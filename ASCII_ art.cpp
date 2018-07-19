#include <iostream>
/*
int main()
{
	int w, h;
	std::cin >> w >> h;
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
			std::cout << "* ";
		std::cout << "\n";
	}
}
*/
/*
int main()
{
	int nerq;
	std::cin >> nerq;
	for (int i = 0; i < nerq; ++i)
	{
		for (int j = 0; j < i; ++j)
			std::cout << "* ";
		std::cout << "\n";
	}
}
*/
/*
int main()
{
	int w, h, t;
	std::cin >> w >> h >> t;
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (i >= t && i < w - t && j >= t && j < h - t)
			{
				for (int z = 0; z < t; ++z)
					std::cout << " ";
			}
			else
				std::cout << "* ";
		}
		std::cout << "\n";
	}
}
*/
/*
int main()
{
	int nerq;
	std::cin >> nerq;
	for (int i = 0; i < nerq; ++i)
	{
		for (int j = 0; j <= nerq - i; ++j)
			std::cout << " ";
		for (int z = 0; z <= i; ++z)
			std::cout << "*";
		std::cout << "\n";
	}
}
*/
int main()
{
	int h, w;
	std::cin >> h >> w;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (j >= (9 / 3) && j < (w - 9 / 3))
				std::cout << " ";
			else
				std::cout << "*";
		}
		std::cout << "\n";
	}
}