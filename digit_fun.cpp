#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int recursive_digits(int number, int counter)
{

	if (number == 1)
		return counter + 1;

	else if (std::to_string(number).length() == number)
	{
		
		return counter + 1;
	}

	else
	{
		long long digits = std::to_string(number).length();
		counter = counter + 1;
		return recursive_digits(digits, counter);
	}

}

int main()
{	
	std::string temp;

	while (temp != "END")
	{
		std::getline(std::cin, temp);
			
		if (temp == "END")
			break;

		if (temp == "1")
			std::cout << 1 << std::endl;
	
		else
			std::cout << recursive_digits(temp.length(), 1) << std::endl;
	}
	return 0;

}
