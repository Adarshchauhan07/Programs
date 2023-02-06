#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(flag==0){
            cout<<arr1[i]<<" ";
            flag=1;
        }
        else{
            cout<<arr2[i]<<" ";
                flag=0;
        }
    }
    flag=0;
    for(int i=n;i>=0;i--){
        if(flag==0){
            cout<<arr1[i]<<" ";
            flag=1;
        }
        else{
            cout<<arr2[i]<<" ";
                flag=0;
        }
    }
}