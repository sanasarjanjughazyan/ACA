#include <iostream>
int main()
{
	int N;
	std::cin >> N;
	std::cout << N << "\n";
	int root = 10;
	while (root > 9)
	{
		root = 0;
		while (N != 0)
		{
			root += (N % 10);
			N /= 10;
		}
		std::cout << root << "\n";
		N = root;
	}
}