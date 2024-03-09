#include<iostream>
using namespace std;
int main(){
    int n,sum_even=0,sum_odd=0,diff;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_even+=a[i];
        }
        else sum_odd+=a[i];
    }
    diff=sum_even-sum_odd;
    cout<<"difference between the sum of elements at even indices to the sum of elements at odd indices is "<<diff;
    return 0;
}

