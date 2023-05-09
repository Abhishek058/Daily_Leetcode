#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int k){

    int s = 0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        if(k > arr[mid]){
            s = mid + 1;
        }
        if(k < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int k){

    int s = 0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        if(k > arr[mid]){
            s = mid + 1;
        }
        if(k < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int even[6] = {1,2,3,3,3,8};
    cout<< "First Occurrence of 3 is at index "<<firstOccur(even, 6, 3)<<endl;
    cout<< "Last Occurrence of 3 is at index "<<lastOccur(even, 6, 3)<<endl;
    return 0;
}