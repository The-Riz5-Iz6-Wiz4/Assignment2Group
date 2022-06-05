// C++ program for insertion sort

#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

// Function to sort an array using
// insertion sort

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {"INSERT NUMBERS HERE"};
	int N = sizeof(arr) / sizeof(arr[0]);

    auto start = high_resolution_clock::now();

	insertionSort(arr, N);
	printArray(arr, N);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

	return 0;
}
// Thanks to geeksforgeeks


