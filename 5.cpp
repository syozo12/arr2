#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0)a[i]+=10;
        else a[i]*=2;
    }
    cout<<"the new array is"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;

    
}