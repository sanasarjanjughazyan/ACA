#include <iostream>

void print(int n)
{
	if (n == 0)
		return;
	int a;
	std::cin >> a;
	print(n - 1);
	std::cout << a << " ";
}

int main()
{
	int n;
	std::cin >> n;
	print(n);
	std::cout << "\n";
}