#include<bits/stdc++.h>
using namespace std;
int fn(string str, int a, int b){
    int n=0;
    for(int i=a;i<b;i++){
        if(str.find("a")){
            n++;
        }
        if(str.find("e")){
            n++;
        }
        if(str.find("i")){
            n++;
        }
        if(str.find("o")){
            n++;
        }
        if(str.find("u")){
            n++;
        }
    }
return n;
}
int main(){
    string str1;
    getline(cin,str1);
    int n;cin>>n;
    int val=0,st=0,end=0;
    for(int i=0;i<str1.size()-n;i++){
        if(fn(str1,i,i+n)>val){
            val=fn(str1,i,i+n);
            st=i;
            end=i+n-1;
        }
    }
    cout<<str1.length(); 
    // for(int i=st;i<=end;i++){
    //     cout<<str1[i];
    // }
}