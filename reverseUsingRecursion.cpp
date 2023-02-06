#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int st,int end, string &str){
    if(st>=end){
        return;
    }
    swap(str[st],str[end]);
    reverse(st+1,end-1,str);
}
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    reverse(0,str.length()-1,str);
    cout<<str;
}