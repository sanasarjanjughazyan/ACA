#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string s;
	std::cin >> s;
	std::vector<int> count(27);
	for (int i = 0; i < s.size(); ++i)
		++count[s[i] - 'a'];
	int forcheck = 0;
	for (int i = 0; i < count.size(); ++i)
		if (count[i] % 2 != 0)
			++forcheck;
	if (forcheck > 1)
	{
		std::cout << "impossible\n";
		return 0;
	}
	char forodd = 0;
	std::string result;
	bool IsOdd = false;
	for (int i = 0; i < count.size(); ++i)
	{
		if (count[i] % 2 != 0)
		{
			forodd = i + 'a';
			--count[i];
			IsOdd = true;
		}
		count[i] /= 2;
		for (int j = 0; j < count[i]; ++j)
			result.push_back(i + 'a');
	}
	std::string rev;
	for (int i = result.size() - 1; i >= 0; --i)
		rev.push_back(result[i]);
	if(IsOdd)
	std::cout << result + forodd + rev << "\n";
	else
		std::cout << result + rev << "\n";
}