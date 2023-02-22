#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vtr1={1,1,2,5,4};
    vector<int>vtr2={8,1,6,4,10};
    vector<int>vtr3;
    
    for(int i=0;i<vtr1.size();i++){
        int key=vtr1[i];
        if((find(vtr3.begin(),vtr3.end(),key)==vtr3.end())){
            vtr3.push_back(vtr1[i]);
        }
    }
    for(int i=0;i<vtr2.size();i++){
        int key=vtr2[i];
        if((find(vtr3.begin(),vtr3.end(),key)==vtr3.end())){
            vtr3.push_back(vtr2[i]);
        }
    }
    for(int i=0;i<vtr3.size();i++){
        cout<<vtr3[i]<<" ";
    }

}