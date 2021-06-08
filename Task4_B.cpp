#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3};
    int n=5;
    int temp[100]={0};
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(temp[i]>1){
            cout<<i<<" ";
        }
    }
}