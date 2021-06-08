#include<iostream>
using namespace std;
int main(){
    int a[]={12,13,1,10,34,1};
    int n=sizeof(a)/sizeof(a[0]);
    int smallest=a[0],secondSmallest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
        if(a[i]<secondSmallest && a[i]>smallest){
            secondSmallest=a[i];
        }
    }
    cout<<"The smallest element is "<<smallest<<endl;
    cout<<"second Smallest element is "<<secondSmallest<<endl;

    return 0;
}