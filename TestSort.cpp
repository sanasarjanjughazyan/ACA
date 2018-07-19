#include <vector>
#include <iostream>
#include <functional>
#include <ctime>
#include <cstdlib>
#include <algorithm>

std::vector<int> Merge(const std::vector<int>& v1,const std::vector<int>& v2)
{
	std::vector<int> result;
	int i1 = 0, i2 = 0;
	while (i1 < v1.size() && i2 < v2.size())
	{
		if (v1[i1] > v2[i2])
			result.push_back(v2[i2++]);
		else
			result.push_back(v1[i1++]);
	}
	while (i1 < v1.size())
		result.push_back(v1[i1++]);
	while (i2 < v2.size())
		result.push_back(v2[i2++]);
	return result;
}
void InsertionSort(std::vector<int>&); // haytararvaca uxxaki nerqevum gorcelu hamar
void MergeSort(std::vector<int>& v)
{
	if (v.size() < 500)  //aragacnelu hamar minch es avelilava urish sortov 
	{
		InsertionSort(v);
		return;
	}
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < (int)v.size(); ++i)
	{
		if (i < v.size() / 2)
			v1.push_back(v[i]);
		else
			v2.push_back(v[i]);
	}
	MergeSort(v1);
	MergeSort(v2);
	v = Merge(v1, v2);
}

void CountingSort(std::vector<int>& v, int min, int max)
{
	std::vector<int> count(max - min + 1);
	for (int i = 0; i < (int)v.size(); ++i)
		++count[v[i] - min];
	v.clear();
	for (int i = 0; i < (int)count.size(); ++i)
	{
		for (int j = 0; j < count[i]; ++j)
			v.push_back(i + min);
	}
}

void SelectionSort(std::vector<int>& v)
{
	for (int i = 0; i < (int)v.size() - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < (int)v.size(); ++j)
		{
			if (v[j] < v[minind])
			{
				std::swap(v[j], v[minind]);
			}
		}
	}
}
void BubbleSort(std::vector<int>& v)
{
	int last = v.size();
	for (int i = 0; i < v.size(); ++i)
	{
		bool sorted = true;
		int last1 = last;
		for(int j = 0; j + 1 < last1; ++j)
			if (v[j] > v[j + 1])
			{
				std::swap(v[j], v[j + 1]);
				sorted = false;
				last = j + 1;
			}
		last1 = last;
		if (sorted)
			break;
	}
}
void InsertionSort(std::vector<int>& v)
{
	for (int i = 1; i < v.size(); ++i)
	{
		int key = v[i];
		int place = i;
		while (place > 0 && key < v[place - 1])
		{
			v[place] = v[place - 1];
			--place;
		}
		v[place] = key;
	}
}

void TestSort(std::function<void(std::vector<int>&)> mySort)
{
	int start_time = clock();

	const int testCount = 100;
	const int minVecLength = 50000;
	const int maxVecLength = 50000;
	const int minElemValue = -20;
	const int maxElemValue = 20;

	int failCount = 0;

	for (int test = 0; test < testCount; ++test)
	{
		int len = rand() % (maxVecLength - minVecLength + 1) + minVecLength;
		std::vector<int> v(len);
		for (int i = 0; i < len; ++i)
		{
			v[i] = rand() % (maxElemValue - minElemValue + 1) + minElemValue;
		}
		std::vector<int> v_original = v;
		std::vector<int> v_etalone = v;
		mySort(v);
		std::sort(v_etalone.begin(), v_etalone.end());

		if (v == v_etalone)
		{
			std::cout << ".";
		}
		else
		{
			++failCount;
			std::cout << "Fail: ";
			for (int j = 0; j < (int)v_original.size(); ++j)
				std::cout << v_original[j] << " ";
			std::cout << "\n";
		}

	}
	std::cout << '\n';
	if (failCount == 0)
	{
		std::cout << "All tests succeeded.\n";
	}
	else
	{
		std::cout << failCount << " out of " << testCount << "tests failed.\n";
	}

	int end_time = clock();
	std::cout << "Total execution time: " << end_time - start_time << " msecs.\n";
}


int main()
{
	srand(time(0));

	TestSort(MergeSort);
	TestSort(std::bind(CountingSort, std::placeholders::_1, -20, 20));
}