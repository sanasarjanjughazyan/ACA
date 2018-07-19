#include <iostream>
#include <string>

void reverse(std::string& x)
{
	for (int i = 0; i < (int)x.size() / 2; ++i)
		std::swap(x[i], x[x.size() - i - 1]);
}

int main()
{
	std::string S, s;
	std::cin >> S >> s;
	bool suffix = true;
	bool prefix = true;
	for (int i = 0; i < (int)s.size(); ++i)
		if (S[i] != s[i])
		{
			prefix = false;
			break;
		}
	reverse(S);
	reverse(s);
	for(int i = 0; i < (int)s.size(); ++i)
		if (S[i] != s[i])
		{
			suffix = false;
			break;
		}
	if (suffix && prefix)
		std::cout << "Both\n";
	else if(suffix)
		std::cout << "Suffix\n";
	else if(prefix)
		std::cout << "Prefix\n";
	else
		std::cout << "Neither\n";
}