#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int maximumSubArraySum(int *array, int elementsCount)
{
    int maxCurrent = array[0], maxGlobal = array[0];
    for (int i = 1; i < elementsCount; i++)
    {
        maxCurrent = max(array[i], maxCurrent + array[i]);
        if (maxCurrent > maxGlobal)
            maxGlobal = maxCurrent;
    }
    return maxGlobal;
}

int main()
{
    int array[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maximumSubArraySum(array, sizeof(array) / sizeof(int)) << endl;
    return 0;
}