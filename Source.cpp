#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

int main()
{
	std::string st;

	std::cin >> st;

	for (size_t i = 2; i < st.length(); i += 3)
	{	
		auto n1 = st[i - 2] - '0';
		auto n2 = st[i - 1] - '0';
		auto control = st[i] - '0';
		auto summ = n1 + n2;
		auto s = n1 * 10 + n2;

		std::cout << char(s);
	}

	return 0;
}