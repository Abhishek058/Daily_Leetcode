#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int count = 0;
    for(int i=1; i<=n; i++){
        for(int a=1;a<n-i+2;a++){
            cout<<a<<" ";
        }
        for(int b=0;b<=i-2;b++){
            cout<<"*"<<" ";
        }
        for(int c=i-1;c>0;c--){
            cout<<"*"<<" ";
        }
        for(int d=n-i+1;d>=1;d--){
            cout<<d<<" ";
        }cout<<endl;
    }
    return 0;
}