#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int b[size];
    int a[size];
    for(int i=0;i<size;i++){
        a[i]=-1;
    }
    for(int i=0;i<size;i++){
        cin>>b[i];
    }
    int cnt=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(b[i]==b[j]){
                ++cnt;
            }            
        }
        a[b[i]]=cnt;
        cnt=0;
    }
    int arr[2]={0,0};
    arr[1]=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[1]<a[i]){
            arr[1]=a[i];
            arr[0]=i;
        }
    }
    cout<<arr[1]<<" times "<<arr[0];
}