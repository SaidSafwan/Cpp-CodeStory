#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int input[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n - i; j++){
            if( input[j] < input[j-1]){
                int temp = input[j-1];
                input[j-1] = input[j];
                input[j] = temp;
            }
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

    BubbleSort(arr, n);

    for(int i = 0; i < n ; i++)
        cout<< arr[i] << " ";
    cout<<endl;
    return 0;
}