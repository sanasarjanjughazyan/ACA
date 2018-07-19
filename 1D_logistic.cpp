#include <iostream>
#include <vector>

//Finding the number of objects with lower and uppear bounds...
int Uppear_Bound(const std::vector<int>& v, int element, int start, int end)
{
	if (start == end)
		return end;
	int mid = (end + start) / 2;
	if (element < v[mid])
		return Uppear_Bound(v, element, start, mid);
	return Uppear_Bound(v, element, mid + 1, end);
}

int Lower_Bound(const std::vector<int>& v, int element, int start, int end)
{
	if (start == end)
		return start;
	int mid = (end + start) / 2;
	if (element > v[mid])
		return Lower_Bound(v, element, mid + 1, end);
	return Lower_Bound(v, element, start, mid);
}

int Number_Of_Objects(const std::vector<int>& v, int start, int end)
{
	start = Lower_Bound(v, start, 0, v.size());
	end = Uppear_Bound(v, end, 0, v.size());
	return end - start;
}

// Sorting the Vector by MergeSort........
std::vector<int> Merge(const std::vector<int>& v1, const std::vector<int>& v2)
{
	int i1 = 0, i2 = 0;
	std::vector<int> result;
	while (i1 < v1.size() && i2 < v2.size())
	{
		if (v1[i1] > v2[i2])
			result.push_back(v2[i2++]);
		else
			result.push_back(v1[i1++]);
	}
	while(i1 < v1.size())
		result.push_back(v1[i1++]);
	while (i2 < v2.size())
		result.push_back(v2[i2++]);
	return result;
}

void Merge_Sort(std::vector<int>& v)
{
	if (v.size() < 2)
		return;
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < v.size(); ++i)
	{
		if (i < v.size() / 2)
			v1.push_back(v[i]);
		else
			v2.push_back(v[i]);
	}
	Merge_Sort(v1);
	Merge_Sort(v2);
	v = Merge(v1, v2);
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
	Merge_Sort(v);
	int m;
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << Number_Of_Objects(v, a, b) << "\n";
	}
}