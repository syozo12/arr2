#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int n,max1,max2,max3;
    max1=max2=max3=INT_MIN;
    cout<<"enter no. of ele";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter ele "<<i+1<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(max1<a[i]){
           max3=max2;
           max2=max1;
           max1=a[i];
        }
        else if(max2<a[i]){
            max3=max2;
            max2=a[i];
        }
        else if(max3<a[i])
            max3=a[i];
    }
    cout<<"maximum element is"<<max1<<endl;
    cout<<"second maximum element is"<<max2<<endl;
    cout<<"third maximum element is"<<max3;
    return 0;

}
