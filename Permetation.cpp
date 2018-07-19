#include <iostream>
#include <vector>
#include <string>

std::vector<int> PermutationHealper(int n, const std::string& s, std::vector<bool>& Nums, int start)
{
	
}

std::vector<int> Permutation(int n, const std::string& s)
{
	std::vector<bool> Nums(n, true);
	int start = 0;
	return PermutationHealper(n, s, Nums, start);
}

int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<int> answ;
	answ = Permutation(n, s);
	for (int i = 0; i < answ.size(); ++i)
		std::cout << answ[i] << " ";
	std::cout << "\n";
}