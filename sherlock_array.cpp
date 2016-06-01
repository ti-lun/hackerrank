#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int figure_out_problem(int* nArray, int size, int right_sum) {
    int left_sum = 0;

    for (int i = 0; i < size; ++i) {
        right_sum -= nArray[i];
        if (left_sum == right_sum) return 1;
        left_sum += nArray[i];
    }

    return 0;


}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;

        if (N == 1) {
            std::cout << "YES" << std::endl;
            continue;
        }
        else if (N == 0) {
            std::cout << "NO" << std::endl;
        }

        int *right_array = new int[N];
        int right_sum = 0;

        for (int j = 0; j < N; ++j) {
            int new_number;
            std::cin >> new_number;
            right_array[j] = new_number;
            right_sum += new_number;
        }

        if (figure_out_problem(right_array, N, right_sum)) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }

        delete[] right_array;
    }
    return 0;
}
