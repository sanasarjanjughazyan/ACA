#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v1(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v1[i];
	int m;
	std::cin >> m;
	std::vector<int> v2(m);
	for (int i = 0; i < m; ++i)
		std::cin >> v2[i];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (v2[i] == v1[j])
				std::cout << v2[i] << " ";
	std::cout << "\n";
}
/*
Levon jan outpute mi te v2-i heratakanutyamb er tvac, myus tex 
v1-i, chishtn asac mtaceci erevi kap chuni qani vor pahanji
mej ban chkar nshac, te vomc tpenq, dra hamar toxeci senc
*/