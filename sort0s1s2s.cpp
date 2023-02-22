#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;cin>>size;
    vector<int>vtr(size);
    
    for(int i=0;i<size;i++){
        cin>>vtr[i];
    }
    int zero(0),one(0),two(0);

    for(int i=0;i<size;i++){
        if(vtr[i]==0){
            zero++;
        }
        if(vtr[i]==1){
            one++;
        }
        if(vtr[i]==2){
            two++;
        }
    }
    int cnt(0);
    for(int i=0;i<zero;i++){
        vtr[cnt++]=0;
    }
    for(int i=0;i<one;i++){
        vtr[cnt++]=1;
    }
    for(int i=0;i<two;i++){
        vtr[cnt++]=2;
    }

    for(int i=0;i<size;i++){
        cout<<vtr[i]<<" ";
    }
}