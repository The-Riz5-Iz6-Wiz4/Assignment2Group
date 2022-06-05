#include<iostream>

using namespace std;

int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temporary = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temporary; j -= gap) {
                arr[j] = arr[j - gap];

            arr[j] = temporary;
            }
        }
    }
    return 0;
};

