#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int FindMedian(int arr[],int n){
    sort(arr,arr+n);
    if(n%2==1){
        return arr[(n/2)];
    }
    else{
        return (arr[(n/2)]+arr[(n/2)-1])/2.0;
    }
}
int main(){
    int arr[1000],cnt=0;
    while(1){
        cin>>arr[cnt];
        cnt++;
        int med=FindMedian(arr,cnt);
        cout<<"median is "<<med<<endl;
    }
    return 0;
}