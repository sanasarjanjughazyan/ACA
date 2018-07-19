#include <iostream>
#include <vector>

int PlaceHealper(int n, std::vector<int>& comb, std::vector<bool>& col, std::vector<bool>& diag1, std::vector<bool>& diag2)
{
	static int ans = 0;
	if (comb.size() == n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (j == comb[i])
					std::cout << "Q" << " ";
				else
					std::cout << "." << " ";
			}
			std::cout << "\n";
		}
		std::cout << "\n";
		++ans;
		return ans;
	}
	int i = comb.size();
	for (int j = 0; j < n; ++j)
	{
		if (col[j] && diag1[i + j] && diag2[i - j + n - 1])
		{
			col[j] = false;
			diag1[i + j] = false;
			diag2[i - j + n - 1] = false;
			comb.push_back(j);
			PlaceHealper(n, comb, col, diag1, diag2);
			col[j] = true;
			diag1[i + j] = true;
			diag2[i - j + n - 1] = true;
			comb.pop_back();
		}
	}

	return ans;
}

void Place(int n)
{
	std::vector<int> v;
	std::vector<bool> col(n, true);
	std::vector<bool> diag1(2 * n - 1, true);
	std::vector<bool> diag2(2 * n - 1, true);
	int count = 0;
	std::cout << PlaceHealper(n, v, col, diag1, diag2);
}

int main()
{
	int n;
	std::cin >> n;
	Place(n);

}