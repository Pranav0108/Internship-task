#include<iostream>
using namespace std;
void rotate(int arr[],int d,int n){
    int res[n],cnt=0;
    for(int i=d;i<n;i++)
    res[cnt++]=arr[i];
    for(int i=0;i<d;i++)
    res[cnt++]=arr[i];

    //copying rotated array to original array
    for(int i=0;i<n;i++)
    arr[i]=res[i];
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int d=2,n=6;
    rotate(arr,d,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}