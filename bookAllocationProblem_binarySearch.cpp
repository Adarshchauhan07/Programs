#include <bits/stdc++.h> 
bool check(vector<int> arr , int n, int B, int mid_val){
    int sum(0);
    int cnt=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid_val){
            return 0;
        }
         
        sum+=arr[i];
        
        if(sum>mid_val){
            sum=arr[i];
    return 1;
}

int allocateBooks(vector<int> arr, int n, int B) {
    if(B>n){
            cnt++;
            if(cnt>B){
                return 0;
            }
        }
    }w
        return -1;
    }
    int st=0;
    int end(0);
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int mid(0);
    int ans(0);
    while(st<=end){
        mid=(st+end)>>1;
        if(check(arr,n,B,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}