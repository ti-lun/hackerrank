#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    int hourglassArray[36];
    int temp;
    for (int i = 0; i < 36; i++)
    {
        std::cin >> hourglassArray[i];
	}

    int biggest_sum = -10000;
    int tempSum;
	int addExtra = -1;
    for (int j = 0; j < 16; j++)
    {
        if ((j) % 4 == 0 && j > 0)
        {
			addExtra = addExtra + 3;
        }
        
        else
        {
			addExtra = addExtra + 1;
        }    
       
		tempSum = hourglassArray[0+addExtra] + hourglassArray[1+addExtra] + hourglassArray[2+addExtra] + 
        hourglassArray[7+addExtra] + hourglassArray[12+addExtra] + hourglassArray[13+addExtra] +
        hourglassArray[14+addExtra];

        if (tempSum > biggest_sum)
        {
			biggest_sum = tempSum;    
        }
    }
    
    std::cout << biggest_sum;
        
    return 0;
}

