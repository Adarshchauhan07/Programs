#include<bits/stdc++.h>
using namespace std;
void linearSrch(vector<int>vtr,int index,int val){
    if(index>=vtr.size()){
        return;
    }
    if(vtr[index]==val){
        cout<<index; 
        return;
    }
    linearSrch(vtr,index+1,val);
}
int main(){
    int n;cin>>n;
    int val;cin>>val;
    vector<int>vtr(n,0);
    for(int i=0;i<n;i++){
        cin>>vtr[i];
    }
    linearSrch(vtr,0,val);    
}