#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

int main()
{
	std::vector<int> day;
	std::vector<int> month;
	std::vector<int> year;
	int d, m, y;
	char ch;
	while (std::cin >> d >> ch >> m >> ch >> y)
	{
		day.push_back(d);
		month.push_back(m);
		year.push_back(y);
	}
	int n = day.size(); // or month.size() or year.size()
	for (int i = 0; i < n - 1; ++i)
	{
		int minind = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (year[j] < year[minind])
			{
				std::swap(year[j], year[minind]);
				std::swap(day[j], day[minind]);
				std::swap(month[j], month[minind]);
			}
			else if (year[j] == year[minind])
			{
				if (month[j] < month[minind])
				{
					std::swap(day[j], day[minind]);
					std::swap(month[j], month[minind]);
				}
				else if (month[j] == month[minind])
				{
					if (day[j] < day[minind])
						std::swap(day[j], day[minind]);
				}
			}
		}
	}
	std::cout << std::setfill('0');
	for (int i = 0; i < n; ++i)
		std::cout << std::setw(2) << day[i] << '/'
		<< std::setw(2) << month[i] << '/'
		<< std::setw(2) << year[i] << "\n";
}