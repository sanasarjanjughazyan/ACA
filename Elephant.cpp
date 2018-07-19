#include <iostream>
#include <vector>

typedef std::vector<std::vector<char>> Matrix;

void Fill(Matrix& chess, int Bi, int Bj, int Di, int Dj)
{
	Bi += Di;
	Bj += Dj;
	while (Bi >= 0 && Bj < chess.size() && Bi < chess.size() && Bj >= 0)
	{
		chess[Bi][Bj] = 'X';
		Bi += Di;
		Bj += Dj;
	}
}

int main()
{
	Matrix chess(8, std::vector<char>(8));
	int Bi = 0, Bj = 0;
	for(int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
		{
			std::cin >> chess[i][j];
			if (chess[i][j] == 'B')
			{
				Bi = i;
				Bj = j;
			}
		}
	Fill(chess, Bi, Bj, -1, -1);
	Fill(chess, Bi, Bj, 1, -1);
	Fill(chess, Bi, Bj, -1, 1);
	Fill(chess, Bi, Bj, 1, 1);
	
	
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
			std::cout << chess[i][j] << " ";
		std::cout << "\n";
	}
}