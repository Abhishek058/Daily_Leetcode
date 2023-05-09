#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort01(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i] == 0 && i<j){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

}

int main()
{
    int arr[5] = {1,0,0,1,0};
    sort01(arr, 5);
    printArray(arr,5);
    return 0;
}