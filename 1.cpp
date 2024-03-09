#include<iostream>
using namespace std ;
int main(){
    int n,x;
    int count=0;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>x){
            count++;
        }
    }
    cout<<"total number of elements strictly greater than x is  "<<count;
    return 0;
}