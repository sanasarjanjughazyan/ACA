#include <iostream>
#include <string>

void reverse(std::string& s)
{
	for (int i = 0; i < (int)s.size() / 2; ++i)
		std::swap(s[i], s[s.size() - i - 1]);
}

int main()
{
	std::string a, b;
	std::cin >> a >> b;
	reverse(a);
	reverse(b);
	if (a.size() > b.size())
		b.resize(a.size(),  '0');
	else
		a.resize(b.size(), '0');
	std::string c;
	int mod = 0;
	for (int i = 0; i < (int)b.size() ; ++i)
	{
		int digita = a[i] - '0';
		int digitb = b[i] - '0';
		int sum = digita + digitb + mod;
		mod = sum / 10;
		sum %= 10;
		c.push_back(sum + '0');
	}
	if (mod > 0)
	c.push_back(mod + '0');
	reverse(c);
	std::cout << c << "\n";
}