#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int front;
    int back;
    int n;

    std::string input;


    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        std::cout << "debugging code: " << input << std::endl;
        front = 0;
        back = input.length()-1;
        while (front <= back)
        {
            std::cout << "front: " << front << "; back: " << back << std::endl;
            int front_count = 0;
            int back_count = 0;

            if (input[front] == 'a' || input[front] == 'e' || input[front] == 'i' ||
               input[front] == 'o' || input[front] == 'u') ++front;
            else
                front_count = 1;

            if (input[back] == 'a' || input[back] == 'e' || input[back] == 'i' ||
               input[back] == 'o' || input[back] == 'u') --back;
            else back_count = 1;

            std::cout << "front_count is " << front_count << "; back_count is " << back_count
                << std::endl;
            if (front_count && back_count)
            {
                std::swap(input[front], input[back]);
                ++front;
                --back;
            }
            std::cout << "input NOW is " << input << std::endl;
        }
        std::cout << input << std::endl;
    }
    return 0;
}
