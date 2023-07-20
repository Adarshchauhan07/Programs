#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>vtr, int k, int sol){
    int cnt=0;
    int size=vtr.size();
    for(int i=0;i<size;i++){
        if(vtr[i]>sol){
            cnt+=(vtr[i]-sol);
        }
    }
    if(cnt>=k) return true;
    return false;
}
int fun(vector<int>vtr, int k){
    sort(vtr.begin(), vtr.end());
    int size=vtr.size();
    int st=0;
    int end=vtr[size-1];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(check(vtr,k, mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>vtr={4, 42, 40, 26, 46};
    int k=20;
    cout<<fun(vtr, k);
    
}