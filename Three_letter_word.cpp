#include <iostream>
#include <iomanip>

char LowCase(char c)
{
	if(c >= 'A' && c <= 'Z')
		c += -'A' + 'a';
	return c;
}

char UppearCase(char c)
{
	if(c >= 'a' && c <= 'z')
		c += -'a' + 'A';
	return c;
}

int main()
{
	char a, b, c;
	std::cin >> a >> b >> c;
	std::cout << UppearCase(a) << LowCase(b) << LowCase(c) << "\n";
}