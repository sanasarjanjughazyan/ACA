#include <iostream>
#include <vector>

void Move(int n, int from, int to, int empty)
{
	if (n == 1)
	{
		std::cout << "Move top ring from peg " << from << " to " << to << "\n";
		return;
	}
		Move(n-1, from, empty, to);
		Move(1, from, to, empty);
		Move(n-1, empty, to, from);
}

int main()
{
	int n;
	std::cin >> n;
	int a = 1, b = 2, c = 3;
	Move(n, a, c, b);
}