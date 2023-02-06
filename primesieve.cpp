#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;cin>>n1;
    int arr[n1]={0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=2;i<n;i++){
        for(int j=i*i;j<n;j+=i){
            arr[j]=1;
        }
    }
    for(int i=2;i<n;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}