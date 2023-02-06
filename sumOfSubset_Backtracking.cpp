#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> final;
bool check(vector<int>&vtr,int sum){
    int cnt(0);
    for(int i=0;i<vtr.size();i++){
        cnt+=vtr[i];
    }
    if(cnt==sum){
        return true;
    }
    return false;
}
void solve(int i,vector<int>num,vector<int>&vtr,int sum){
    if(i>=num.size()){
        if(check(vtr,sum)){
            final.push_back(vtr);
        }
        return;
    }
    solve(i+1,num,vtr,sum);
    vtr.push_back(num[i]);
    solve(i+1,num,vtr,sum);
    vtr.pop_back();
}
int main(){
    int sum;cin>>sum;
    int size;cin>>size;
    vector<int>num;
    vector<int>vtr;
    for(int i=0;i<size;i++){
        int x;cin>>x;
        num.push_back(x);
    }
    solve(0,num,vtr,sum);    
    for(int i=0;i<final.size();i++){
        for(int j=0;j<final[i].size();j++){
            cout<<final[i][j]<<" ";
        }
        cout<<endl;
    }
}
