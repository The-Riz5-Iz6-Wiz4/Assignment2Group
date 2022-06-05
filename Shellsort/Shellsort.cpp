#include<iostream>
#include<chrono>

using namespace std;

int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temporary = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temporary; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temporary;
        }
    }
    return 0;
};

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
};

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int arr[] = {30,46,49,3,82,33,17,45,23,71,11,54,2,31,3,92,53,84,22,60,98,28,45,26,76,76,35,42,4,1,67,98,57,55,81,64,99,86,8,30,60,43,88,68,76,76,5,90,22,26,51,24,32,50,91,14,32,38,38,15,91,65,1,100,63,85,85,84,87,44,95,19,41,45,55,12,79,56,60,47,42,81,99,14,33,69,21,90,45,70,10,58,16,84,28,12,87,75,31,7};

    int n = sizeof(arr)/sizeof(arr[0]);
    shellSort(arr, n);
    printArray(arr, n);

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = double(std::chrono::duration_cast<std::chrono::microseconds>(end-start).count());

    cout << "Running time for shell sort: " << duration << endl;
};