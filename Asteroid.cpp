#include <iostream>
#include <fstream>

int main()
{
	std::ofstream fout("AsteroidsDatabase.txt");
	
	for (int i = 0; i < 5; ++i)
	{
		int x, y, z;
		std::cin >> x >> y >> z;
		fout << x << " " << y << " " << z << "\n";
	}
}