#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream fin("gibberish.txt");
	if (!fin.is_open())
	{
		std::cout << "Error\n";
		return EXIT_FAILURE;
	}
	std::vector<int> count('z' - 'a' + 1);
	char x;
	while (fin >> x)
		++count[x - 'a'];
	
	for (int i = 0; i < count.size(); ++i)
	{
		std::cout << (char)(i + 'a') << " - " << count[i] << "\n";
	}
}