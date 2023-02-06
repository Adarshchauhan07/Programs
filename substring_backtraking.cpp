#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string>final;
void substring(int i,string nums,string &str){
    if(i>=nums.length()){
        final.push_back(str);
        return;
    }
    substring(i+1,nums,str);
    str.push_back(nums[i]);
    substring(i+1,nums,str);
    str.pop_back();
}
int main(){
    string nums;
    getline(cin,nums);
    string str;
    substring(0,nums,str);
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
    }
}