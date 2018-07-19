#include <iostream>
#include <vector>

bool BinarySearch(const std::vector<int>& v, int element, int start, int end, int& count)
{
	if (start == end)
		return false;
	int mid = (start + end) / 2;
	++count;
	std::cout << "My guess number " << count << ":" << v[mid] << "\n";
	char user_answer;
	std::cin >> user_answer;
	if (user_answer == '=')
		return true;
	if (user_answer == '>')
		return BinarySearch(v, element, mid + 1, end, count);
	else
		return BinarySearch(v, element, start, mid, count);
}

void BS(int element)
{
	std::vector<int> v(999);
	for (int i = 0; i < 999; ++i)
		v[i] = i + 1;
	int count = 0;
	if (BinarySearch(v, element, 0, v.size(), count))
		std::cout << "Yay! I figured out your number with  " << count << " guesses\n";
	else
		std::cout << "I was not able to figure out your number within 10 guesses. You must have cheated!\n";
}

int main()
{
	int y;
	std::cout << "Think of a number in the range[1, 999].\n Enter y when ready: ";
	std::cin >> y;
	std::cout << "\n";
	BS(y);
}