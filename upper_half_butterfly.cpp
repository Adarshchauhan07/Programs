#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"$";
        }
        for(int k=i+1;k<=n;k++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"$";
        }
        cout<<endl;
    }
    //lower half
       for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            cout<<"$";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i;j++){
            cout<<"$";
        }
        cout<<endl;
    }
}