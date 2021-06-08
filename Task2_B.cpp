#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            if(j<=n){
                cout<<((j<=i)?"* ":"  ");
            }
            else{
                for(int k=n-i;k>0;k--)
                cout<<" ";
                for(int j=1;j<=i;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n+1;j++){
            if(j<=n){
                cout<<((j<=i)?"* ":"  ");
            }
            else{
                for(int k=n-i;k>0;k--)
                cout<<" ";
                for(int j=1;j<=i;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}