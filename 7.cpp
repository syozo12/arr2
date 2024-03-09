#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0,ld;
    cout<<"enter no. of ele";
    cin>>n;
    bool flag=true;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
           cout<<"the array is not palindrome";
           flag=false;
           break;
        }
    }
    if(flag==true) cout<<"the array is a palindrome";
    return 0;
   
}