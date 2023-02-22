#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int key;cin>>key;

    int st(0),end(key),mid(0),store_val(-1);
    while(st<=end){
        mid=(st+end)/2;
        if(mid*mid>key){
            end=mid-1;
        }
        else if(mid*mid<=key){
            st=mid+1;
            store_val=mid;
        }
    }
    cout<<store_val<<endl;
    double final_ans(store_val);

    int percesion;cin>>percesion;
    int store=pow(10,percesion);
    double newStoreVal=store_val + 1/store;
    for(int i=0;i<percesion;i++){
        for(double j=newStoreVal; j*j<=key; j+=store){
            final_ans=j;
            cout<<j<<endl;
        }
    }
    cout<<final_ans;
}