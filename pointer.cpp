#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void reverse
int main(){
    vector<int>vtr1;
    vtr1.assign(10,0);
    vector<int>vtr2;
    vtr2.assign(10,0);
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }  


    for(int i=0;i<size;i++){
        if(arr[i]>=0){
            vtr1[arr[i]]++;
        }
        if(arr[i]<0){
            int x=arr[i]*-1;
            vtr2[x]++;
        }
    }
    for(int i=0;i<vtr1.size();i++){
        cout<<vtr1[i]<<" ";
    }cout<<("\n");
    for(int i=0;i<vtr2.size();i++){
        cout<<vtr2[i]<<" ";
    }
}