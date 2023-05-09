#include<iostream>
using namespace std;

void findUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];       //XOR of two number 3^3=0
    }
    cout<<ans;
}

int main()
{
    int arr[7] = {1,2,3,4,2,3,1};
    findUnique(arr, 7);
    return 0;
}