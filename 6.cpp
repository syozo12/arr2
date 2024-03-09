#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    bool flag=true;
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        flag=true;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j]){
              flag=false;
              break;
            }
        }
        if(flag){
            cout<<"the unique element is "<<a[i];
            cout<<endl;
        
        }
        
    
    }
    if(flag==false) cout<<"no unique element ";


    return 0;
}