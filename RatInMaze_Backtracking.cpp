#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issafe(int x,int y, int n, vector<vector<bool>>&vis, vector<vector<int>>&arr){
    if((x>=0 && x<n) && (y>=0 && y<n)  && vis[x][y]==0 && arr[x][y]==1){
        return true;
    }
    return false;
}
void solve(int x,int y,int n, vector<vector<int>>&arr,vector<string>&ans,vector<vector<bool>>&vis,string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    //movement  DLRU

    vis[x][y]=1;
    if(issafe(x+1,y,n,vis,arr)){
        solve(x+1,y,n,arr,ans,vis,path+'D');
    }
    if(issafe(x-1,y,n,vis,arr)){
        solve(x-1,y,n,arr,ans,vis,path+'U');
    }
    if(issafe(x,y+1,n,vis,arr)){
        solve(x,y+1,n,arr,ans,vis,path+'R');
    }
    if(issafe(x,y-1,n,vis,arr)){
        solve(x,y-1,n,arr,ans,vis,path+'L');
    }
    vis[x][y]=0;
}
int main(){
    int n;cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back(vector<int>());
        for(int j=0;j<n;j++){
            int val;cin>>val;
            arr[i].push_back(val);
        }
    }
    vector<vector<bool>>vis(n,vector<bool>(n,0));
    vector<string>ans;
    string path="";
    solve(0,0,n,arr,ans,vis,path);
    cout<<endl<<ans.size();
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}