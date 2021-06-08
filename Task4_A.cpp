#include<iostream>
using namespace std;
int main(){
    int arr[]={-80,-70,-5,28,61,85};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0]+arr[1],n1=0,n2=1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(abs(arr[i]+arr[j])<abs(min)){
                min=arr[i]+arr[j];
                n1=i;
                n2=j;
            }
        }
    }
    cout<<"The NUmber whose sum closet to zero is"<<arr[n1]<<" and "<<arr[n2]<<endl;
    return 0;
}