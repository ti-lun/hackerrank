#include <iostream>
#include <vector>

int main(int argc, const char * argv[])
{
	int a[3];
	int b[3];

	//Return Date
	std::cin >> a[0]; // D1
	std::cin >> a[1]; // M1
	std::cin >> a[2]; // Y1

	//Expected return date
	std::cin >> b[0]; // D2
	std::cin >> b[1]; // M2
	std::cin >> b[2]; // Y2

	int fine = 0;

	if (b[2] != a[2])
	{
		if (a[2] > b[2])
		{
			fine = 10000;
		}
	}
	else if (b[1] != a[1])
	{
		fine = (std::max((a[1]-b[1]), 0)) * 500;
	}
	else
	{
		fine = (std::max(a[0]-b[0], 0)) * 15;
	}
	std::cout << fine << std::endl;

}
