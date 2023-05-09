#include<iostream>
using namespace std;

bool UniqueOccurance(int arr[], int size){
    int count = 0;
    for (int i = 0; i<size; i++){
        for (int j = i; j<size; j++){
            if(arr[i] = arr[j]){
                count++;
            }
        } 
        if(count == 2){
            return true;
        }
    }
}

int main()
{
    int odd[7] = {3,4,9,1,4,9,1};
    UniqueOccurance(odd, 7);
    return 0;
}