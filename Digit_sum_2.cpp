# include <iostream>
int main()
{
	int a;
	std::cin >> a;
	int errord = a / 100;
	int erkrord = (a / 10) % 10;
	int arajin = a % 10;
	int sum = arajin + erkrord + errord;
	std::cout << sum;
}
