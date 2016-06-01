#include <iostream>

int getPivot(int n)
{
    while (n > 0)
    {
	if (n%3 == 0)
	    break;
	
	else
	    n -= 5;
    }
    return n;
}

int main()
{
    int n;
    std::cin >> n;

    int pivot = getPivot(n);


    if (pivot < 0)
    {
	std::cout << "-1" << std::endl;
    }

    else
    {
	int repeat = pivot/3;
	while (repeat--)
	    std::cout << "555";
        repeat = (n-pivot)/5;
        while (repeat--)
	    std::cout << "33333";
        std::cout << std::endl;
    }
    return 0;
}
