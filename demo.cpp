#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vtr={10,11,12,13,14,15,16};
    map<int,int>mp;
    int i=0;
    for(auto itr: vtr){
        mp.insert({itr,i++});
    }
    for(auto itr: mp){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}
 