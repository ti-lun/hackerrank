#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::pair<int, int> ii;
typedef std::vector<ii> vii;

int main()
{
	std::pair<int,int> testing;

	testing = std::make_pair(1, 2);

	
	std::cout << testing.first << " " << testing.second << std::endl;
	return 0;
}
