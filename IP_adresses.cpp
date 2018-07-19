#include <iostream>
#include <string>
#include <sstream>

unsigned int Encode(const std::string& IPAdress)
{
	std::istringstream iss(IPAdress);
	int a, b, c, d;
	char f;
	iss >> a >> f >> b >> f >> c >> f >> d;
	c <<= 8, b <<= 16, a <<= 24;
	unsigned int answer = d + c + b + a;
	return answer;
}

std::string Decode(unsigned int code)
{
	std::ostringstream oss;
	unsigned int a = code >> 24;
	unsigned int b = code << 8 >> 24;
	unsigned int c = code << 16 >> 24;
	unsigned int d = code << 24 >> 24;
	oss << a << "." << b << "." << c << "." << d;
	std::string s = oss.str();
	return s;
}

int main()
{
	std::cout << Decode(Encode("125.0.0.4")) << "\n";
	std::cout << Encode(Decode(19)) << "\n";
}
