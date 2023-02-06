#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vtr;
void duplicate(int size,int arr[]){
    vector<int>vtr2;
    vtr2.assign(1000,0);
    vector<int>vtr1;
    vtr1.assign(1000,0);
    for(int i=0;i<size;i++){
        if(arr[i]>=0){
            vtr1[arr[i]]++;
        }
        if(arr[i]<0){
            int x=arr[i]*-1;
            vtr2[x]++;
        }
    }
    vtr.push_back(vtr1);
    vtr.push_back(vtr2);
    return;
}
int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }    
    duplicate(size,arr);
    for(int i=0;i<vtr.size();i++){
        for(int j=0;j<vtr[i].size();i++){
            cout<<vtr[i][j]<<' ';
        }
        cout<<endl;
    }
}