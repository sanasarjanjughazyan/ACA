#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream fin("AsteroidsDatabase.txt");
	std::vector<int> X;
	std::vector<int> Y;
	std::vector<int> Z;
	int x, y, z;
	while (fin >> x >> y >> z)
	{
		X.push_back(x);
		Y.push_back(y);
		Z.push_back(z);
	}
	for (int i = 0; i < X.size() - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < X.size(); ++j)
		{
			if (X[j] * X[j] + Y[j] * Y[j] + Z[j] * Z[j] < X[minind] * X[minind] + Y[minind] * Y[minind] + Z[minind] * Z[minind])
			{
				std::swap(X[j], X[minind]);
				std::swap(Y[j], Y[minind]);
				std::swap(Z[j], Z[minind]);
			}
		}
	}
	std::ofstream fout("AsteroidsSortedByDanger.txt");
	for (int i = 0; i < X.size(); ++i)
		fout << X[i] << " " << Y[i] << " " << Z[i] << "\n";
}