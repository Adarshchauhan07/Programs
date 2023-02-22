#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>vtr(n);
    for(int i=0;i<n;i++){
        cin>>vtr[i];
    }
    int triplet;cin>>triplet;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=j+1;l<n;l++){
                if(vtr[i]+vtr[j]+vtr[l]==triplet){
                    cout<<i<<j<<l;
                } 
            }
        }
    }
}