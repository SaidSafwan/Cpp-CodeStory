#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    // Implement Insertion Sort here
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int j = i-1;
        int value = arr[i];
        for( ; j >= 0; j--){
            if(arr[j] < value){
                break;
            }
            arr[j+1] = arr[j];
        }
        arr[j+1] = value;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
    return 0;
}
