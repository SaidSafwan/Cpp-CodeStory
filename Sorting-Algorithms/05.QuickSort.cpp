#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivotValue = arr[low];
    int i = low, j = high; 
    while(i < j){
        while(arr[i] <= pivotValue) i++;
        while(arr[j] > pivotValue) j--;
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}


void quickSort(vector<int>& arr, int low, int high) {
    if(low < high){
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    } 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    return 0;
}
