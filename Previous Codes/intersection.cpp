#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    
    int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m){

        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main()
{
    int farr[6]= {1,2,2,3,4,2};
    int sarr[4]= {2,3,2,3};
    intersection(farr, 6, sarr, 4);
    return 0;
}