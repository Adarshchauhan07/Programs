#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int st,int end,string &str){
    if(st>=str.length()-1){
        return;
    }
    for(int i=st;i<str.length()-1;i++){
        if(str[st]==str[i] && st!=i){
            str.erase(str.begin()+i);
        }
    }
    removeDuplicates(st+1,end,str);
}
int main(){
    string str;
    cout<<str<<endl;
    getline(cin,str);
    removeDuplicates(0,str.length()-1,str);
    cout<<str;
}