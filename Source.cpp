#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
	std::string a{ "ababbababbaa" };
	int q = 1;
	int i = 1;
	while (q < 4)
	{
		auto c = a[i - 1];
		if (q == 2)
		{
			if (c == 'a')
			{
				a[i - 1] = 'b';
			}
			else
			{
				q = 1;
			}
		}
		if (q == 3)
		{
			if (c == 'b')
			{
				a[i - 1] = 'a';
			}
			else
			{
				q = 1;
			}
		}
		if (q == 1)
		{
			a.erase(i, 1);
			i--;
			if (c == 'a')
			{
				q = 3;
			}
			if (c == 'b')
			{
				q = 2;
			}
		}
		i++;
		if (i > a.length())
		{
			q = 4;
		}
		std::cout << a << '\n';
	}

	std::cout << a << '\n';

	return 0;
}