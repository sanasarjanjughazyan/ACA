#include <iostream>
#include <string>
int main()
{
	std::string all, need;
	std::cin >> all >> need;
	for (int i = 0; i <= (int)(all.size() - need.size()); ++i)
	{
		bool matched = true;
		for(int j = 0; j < (int)need.size(); ++j)
			if (all[i + j] != need[j])
			{
				matched = false;
				break;
			}
		if (matched)
			std::cout << i << " ";
	}
}