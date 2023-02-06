#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fn(int st,int end,string &str){
    if(st>end){
        return;
    }
    if(str[st]=='x'){
        str.erase(str.begin()+st);
        str.append("x");
        fn(st+1,end,str);
        return;
    }
    else{
        fn(st+1,end,str);        
        return;
    }
}
int main(){
    string str;
    getline(cin,str);
    fn(0,str.length()-1,str);
    cout<<str;
}