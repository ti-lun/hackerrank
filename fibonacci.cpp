#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int fibo(int n, int a0, int a1, int total)
{
    if (n == 2)
    {
        return a0 + a1;   
    }

    else
    {    
         int a2 = a0 + a1;
         return fibo(n-1, a1, a2, a2);
    }
    
    return 0;
}
    

int main() 
{  
    int n;
    std::cin >> n;
    std::cout << fibo(n, 0, 1, 0) << std::endl;
    return 0;
}
