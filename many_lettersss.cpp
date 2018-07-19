#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
int main()
{
	srand(time(0));
	std::ofstream fout("gibberish.txt");
	for (int i = 0; i < 100000; ++i)
		fout << (char) (rand() % 26 + 'a');
}