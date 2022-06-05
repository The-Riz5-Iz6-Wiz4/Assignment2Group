#include <chrono>
#include <fstream>
#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 65,19,27,129,2,23,124,3,117,114,192,149,174,136,99,43,45,176,4,177,165,185,185,129,30,133,37,122,177,3,95,5,115,79,21,42,11,85,64,115,6,54,89,71,163,66,165,146,3,39,173,82,43,40,185,45,125,154,78,114,124,107,166,53,167,155,175,127,119,176,102,149,116,188,189,47,189,42,179,172,199,170,91,188,145,80,192,190,125,108,15,20,112,141,173,51,86,7,131,111,32,111,15,71,167,108,197,157,6,65,37,185,35,24,15,150,166,177,117,116,101,35,79,128,71,178,5,129,7,186,96,76,68,83,186,83,183,69,112,97,20,70,52,145,181,114,96,167,155,42,152,7,198,168,103,38,183,58,61,182,172,133,167,13,172,155,79,183,124,80,126,43,193,138,143,116,110,79,182,129,16,92,1,143,160,195,142,38,153,196,181,137,188,15,71,2,72,200,7,37 };
    auto start = std::chrono::high_resolution_clock::now();
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    printf("Duration:%ld microseconds \n", duration.count());
    return 0;
}
