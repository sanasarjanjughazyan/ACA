#include <iostream>
#include <vector>
#include <iomanip>



int main()
{
	int n;
	std::cin >> n;
	bool IsPalindrom = true;
	std::vector<char> word(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> word[i];
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] += - 'A' + 'a';
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (word[i] != word[n - i - 1])
		{
			IsPalindrom = false;
			break;
		}		
	}	
	std::cout << ((IsPalindrom) ? "Yes" : "No") << "\n";
}