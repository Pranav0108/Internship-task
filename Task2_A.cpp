#include<iostream>
using namespace std;
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n],cnt=0;
    int temp=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>temp){
            res[cnt]=arr[i];
            cnt++;
            temp=arr[i];
        }
    }
    cout<<"leaders are ";
    for(int i=cnt-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
    return 0;
}