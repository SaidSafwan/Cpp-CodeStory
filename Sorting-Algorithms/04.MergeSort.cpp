#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1;
    int index = 0;
    int* newArr = new int[right - left + 1];  // Dynamic array to store sorted elements temporarily

    // Merging two halves into newArr
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            newArr[index++] = arr[i++];
        } else {
            newArr[index++] = arr[j++];
        }
    }
    // Copy any remaining elements from the left half
    while (i <= mid) {
        newArr[index++] = arr[i++];
    }
    // Copy any remaining elements from the right half
    while (j <= right) {
        newArr[index++] = arr[j++];
    }

    // Copy sorted elements back to the original array
    for (int x = 0; x < index; x++) {
        arr[left + x] = newArr[x];
    }
    
    delete[] newArr;  // Free dynamically allocated memory
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {  // Correct base condition for recursion
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);      // Sort the left half
        mergeSort(arr, mid + 1, right); // Sort the right half
        merge(arr, left, mid, right);   // Merge sorted halves
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];  // Dynamically allocated array for input

    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;  // Free dynamically allocated memory for arr
    return 0;
}
