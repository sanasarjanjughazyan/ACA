#include <iostream>
#include <fstream>
int main()
{
	std::ofstream fout("numbers.txt");
	for (int i = 1; i <= 10000; ++i)
	{
		fout << i;
	}
}