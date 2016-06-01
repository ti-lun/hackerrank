#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int n;
    std::string comma;
    int counter1 = 0;
    int counter2 = 1;
    int result = 0;
    while (counter1 != counter2)
    {
        std::cin >> n;
        counter1 = counter1 + 1;
        result = result ^ n;
        std::cin >> comma;
        if (comma == ",")
            {counter2 = counter2 + 1;}
		std::cout << comma;
        std::cout << n;
    }
    
    std::cout << result;
    return 0;
}
