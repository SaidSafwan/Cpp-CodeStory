#include<iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int *arr, int n){
    for(int  i = 0; i < n-1; i++){
        int minValue = arr[i], minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < minValue){
                minValue = arr[j];
                minIndex = j;
            }
        }
        if(minIndex != i){
            std::swap(arr[i], arr[minIndex]);
        }
    }
}


int main(){
    int n;
    cout<<"Enter n value: "<<endl;
    cin>>n;

    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>arr[i];
    }

    SelectionSort(arr, n);

    for(int i = 0; i < n ; i++)
        cout<< arr[i] << " ";
    cout<<endl;
    return 0;
}