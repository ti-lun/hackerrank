#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
		long long n, m;
		int digitCount = 0;

		std::cin >> n;
		m = n;
	
		while (m > 0) 
		{
			int curDigit = m%10;
			m /= 10;
			if (curDigit != 0 && n % curDigit == 0) 
			{
				digitCount++;
			}
		}
		std::cout << digitCount << "\n";
	}
	return 0;
}
