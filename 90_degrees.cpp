#include <iostream>
#include <string>
#include <vector>


int main()
{
	int n;
	std::cin >> n;
	std::string GetFirstLine;
	std::getline(std::cin, GetFirstLine);
	std::vector<std::string> Imput;
	for (int i = 0; i < n; ++i)
	{
		std::string CurrentLine;
		std::getline(std::cin, CurrentLine);
		Imput.push_back(CurrentLine);
	}
	int maxsize = Imput[0].size();
	for (int i = 1; i < n; ++i)
		if (maxsize < Imput[i].size())
			maxsize = Imput[i].size();
	for (int i = 0; i < n; ++i)
		Imput[i].resize(maxsize);
	for (int i = 0; i < maxsize; ++i)
	{
		for(int j = 0; j < n; ++j)
			std::cout << Imput[j][i] << " ";
		std::cout << "\n";
	}
}
// Levon jan orinakic copy pastov chi linum Armenn asec erevi sxala orinaki mej mi ban notepadi mej artagrel em heto berel