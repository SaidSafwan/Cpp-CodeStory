#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapSort(vector<int>& arr) {
    // Implement Heap Sort here
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int childindex = i;

        while (childindex > 0) {
            int parentindex = (childindex - 1) / 2;

            if (arr[childindex] < arr[parentindex]) {
                std::swap(arr[childindex], arr[parentindex]);
            } else {
                break;
            }

            childindex = parentindex;
        }
    }

    // Heapify and extract elements

    while (n > 0) {
        n = n - 1;
        swap(arr[0], arr[n]);
        int parentindex = 0;
        int leftchildidx = (2 * parentindex) + 1;
        int Rightchildidx = (2 * parentindex) + 2;

        while (leftchildidx < n) {
            int minindex = parentindex;

            if (leftchildidx < n && arr[leftchildidx] < arr[minindex])
                minindex = leftchildidx;
            if (Rightchildidx < n && arr[Rightchildidx] < arr[minindex])
                minindex = Rightchildidx;

            if (minindex == parentindex)
                break;

            std::swap(arr[parentindex], arr[minindex]);

            parentindex = minindex;

            leftchildidx = (2 * parentindex) + 1;
            Rightchildidx = (2 * parentindex) + 2;
        }
    }
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
