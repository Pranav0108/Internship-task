#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,3,4,5,7};
    int arr2[]={2,3,5,6};
    int m=sizeof(arr1)/sizeof(arr1[0]),n=sizeof(arr2)/sizeof(arr2[0]);
    int i = 0, j = 0; 
    cout<<"Union of Two array is ";
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) {
        cout<<arr1[i]<<" ";
        i++;
    }
    else if (arr2[j] < arr1[i]) {
        cout<<arr2[j]<<" ";
        j++;
    }
    else
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  }
  if(i<m){
      cout<<arr1[i++];
  }
  else if(j<n){
      cout<<arr2[j++];
  }
  cout<<endl<<"Intersection of two array is";
     i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       i++; 
    else if (arr2[j] < arr1[i]) 
       j++; 
    else
    { 
       cout << arr2[j] << " "; 
       i++; 
       j++; 
    } 
  }
    return 0;
}