#include <iostream>
#include <vector>
using namespace std;

void heapSort(vector<int>& arr) {
    // Implement Heap Sort here
    
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    heapSort(arr);

    cout << "Sorted array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    return 0;
}
