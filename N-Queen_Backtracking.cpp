#include<bits/stdc++.h>
using namespace std;
bool issafe(int row,int col,vector<vector<int>>&board,int n){
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }
    i=row;
    j=col;
    while(i<=n){
        if(board[i][j]==1){
            return false;
        }
        j--;
        i++;
    }
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
        i--;
    }

    return true;
}
void ad(vector<vector<int>>&board,vector<vector<int>>&ans,int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    // ans.push_back(temp);
}
void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){
    if(col>=n){
        ad(board,ans,n);
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            board[row][col]=1;
            solve(col+1,board,ans,n);
            board[row][col]=0;
        }
    }
}
int main(){
      int n;cin>>n;
      vector<vector<int>>board(n,vector<int>(n,0));
      vector<vector<int>>ans;
      solve(0,board,ans,n);
      
    //   cout<<ans.size();
      for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();i++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }

}