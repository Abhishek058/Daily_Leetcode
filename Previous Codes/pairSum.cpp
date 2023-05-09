#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int l){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == l){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main()
{
    int Arr[8] ={8,1,3,4,2,5,7,6};
    pairSum(Arr, 8, 9);
    return 0;
}