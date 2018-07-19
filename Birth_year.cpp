#include <iostream>
int main()
{
	int year;
	std::cin >> year;
	int ThisYear = 2018;
	int age = ThisYear - year;
	if (age > 0 && age < 120)
		std::cout << age << "\n";
	else
		std::cout << "Incorrect Year" << "\n";
}