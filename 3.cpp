#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag =true;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=false;
            cout<<"it is not sorted";
            break;
        }
    }
    if(flag==true) cout<<"it is sorted";
    return 0;
}
