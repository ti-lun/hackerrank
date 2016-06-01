#include <iostream>

void update_shit(int* array, int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        array[i] += 4;
    }
}

int main()
{
    int hi[5];
    for (int i = 0; i < 5; i++)
    {
        hi[i] = i;
    }

    update_shit(hi, 5);

    for (int j = 0; j < 5; j++)
    {
        std::cout << hi[j] << std::endl;
    }
    return 0;

}
