#include<iostream>
using namespace std;
int main(){
    int arr[]={3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6 ;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ind1=-1,ind2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            ind1=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==y){
            ind2=i;
            break;
        }
    }
    cout<<ind2-ind1<<endl;
    return 0;
}