#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replace(int st,int end,string str){
    if(st>=end){
        return;
    }
    if(str[st]=='p' && str[st+1]=='i' && st<=end){
        cout<<"3.14";
        replace(st+2,end,str);
    }
    else{
        cout<<str[st];
        replace(st+1,end,str);
    }
} 
int main(){
    string str;
    getline(cin,str);
    replace(0,str.length(),str);
}