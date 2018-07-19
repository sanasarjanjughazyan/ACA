#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	bool same_num = true;
	int last_dig = n % 10;
	n /= 10;
	while (n != 0)
	{
		if (n % 10 != last_dig)
			same_num = false;
		n /= 10;
	}
	if (same_num)
		std::cout << "Boring" << "\n";
	else
		std::cout << "Interesting" << "\n";
}